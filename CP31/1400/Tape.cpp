#include<iostream>
#include<vector>
using namespace std;

int main()
{
   int n; int m; int k;
   cin>>n>>m>>k;
   
   vector<int> ar (n);
   for (int i = 0 ; i<n; i++) {
      cin >> ar[i];
   }
//code

// k tapes left
// n broken segment
if (n == 1 ) {
   cout << 1 ;
   return 0;
}

for (int i = n-1; i>0; i--){
   ar[i] = ar[i] - ar[i-1];
}
int maxm = ar [1];
for(int i: ar){
   maxm = max(maxm, i);
}
ar[0] = maxm + 1 ;
maxm += 2 ;

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
      if (ar[1] == maxm){
         brokenSegment ++ ;
      } else {
         tapeLeft-- ;
         tapeUsed += 1;
      }
   }else if (indexOfMin == n-1) {   //edge case {last index}
      if (ar[n-2] == maxm){
         tapeUsed += min;
      }else{
         tapeUsed += min + 1 ;
         tapeLeft-- ;
         brokenSegment-- ;
      }
   }else if (ar[indexOfMin - 1] == maxm) { 
      if (ar[indexOfMin + 1] == maxm ) {//connecting two tapes
         tapeUsed += min - 1;
         tapeLeft ++ ;
         brokenSegment ++ ;
      } else {             //extending tape to right
         tapeUsed += min;
      }
   } else { 
      if (ar[indexOfMin + 1] == maxm) { //extending tape to left
         tapeUsed += min;
      } else {             //starting new strip
         tapeUsed += min + 1 ;
         brokenSegment-- ;
         tapeLeft--;
      }
   }

   brokenSegment--;
   ar[indexOfMin] = maxm ; //marking as taped (index-1 to index : stripped)

}

tapeUsed += brokenSegment; // here tapeLeft == brokenSegment

cout << tapeUsed;
return 0;
}

//time limit exceeded