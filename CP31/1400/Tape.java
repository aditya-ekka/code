import java.util.Scanner;

public class Tape {
    public static void main (String[] args){
      Scanner scanner = new Scanner(System.in);

      int n; int m; int k;
      
      n = scanner.nextInt();
      m = scanner.nextInt();
      k = scanner.nextInt();
      
      int[] ar = new int[n];
      for (int i = 0 ; i<n; i++) {
         ar[i] = scanner.nextInt();
      }
      
//code

// k tapes left
// n broken segment
if (n == 1 ) {
   System.out.println(1);
   scanner.close();
   return;
}

for (int i = n-1; i>0; i--){
   ar[i] = ar[i] - ar[i-1];
}
int max = ar [1];
for(int i: ar){
   if(max < i) {
      max = i;
   }
}
ar[0] = max + 1 ;
max += 2 ;

int tapeLeft = k;
int brokenSegment = n;
int tapeUsed = 0;

while (tapeLeft != brokenSegment || tapeLeft < 0) {
   int min = ar[0];
   int indexOfMin = 0;
   for (int i=1 ; i<n; i++) {
      if (ar[i] < min) {
         min = ar[i];
         indexOfMin = i;
      }
   }
   //
   if (indexOfMin == 0){   //edge case {first index}
      if (ar[1] == max){
         brokenSegment ++ ;
      } else {
         tapeLeft-- ;
         tapeUsed += 1;
      }
   }else if (indexOfMin == n-1) {   //edge case {last index}
      if (ar[n-2] == max){
         tapeUsed += min;
      }else{
         tapeUsed += min + 1 ;
         tapeLeft -- ;
         brokenSegment -- ;
      }
   }else if (ar[indexOfMin - 1] == max) { 
      if (ar[indexOfMin + 1] == max ) {//connecting two tapes
         tapeUsed += min - 1;
         tapeLeft ++ ;
         brokenSegment ++ ;
      } else {             //extending tape to right
         tapeUsed += min;
      }
   } else { 
      if (ar[indexOfMin + 1] == max) { //extending tape to left
         tapeUsed += min;
      } else {             //starting new strip
         tapeUsed += min + 1 ;
         brokenSegment-- ;
         tapeLeft--;
      }
   }

   brokenSegment--;
   ar[indexOfMin] = max ; //marking as taped (index-1 to index : stripped)

   // System.out.println(tapeLeft + " " + brokenSegment + " " + tapeUsed );
   // for(int num : ar){
   //    System.out.print(num + " " );
   // }
   // System.out.println();

}

tapeUsed += tapeLeft; // here k = n

System.out.print(tapeUsed);


// checking


//
      scanner.close();
    }
}

//time limit exceeded