import java.util.Scanner;

public class deleltiveEditing
{
   static Scanner scanner = new Scanner(System.in);
   public static void main(String[] args)
   {
      int n = scanner.nextInt();

      for(int i=0; i<n; i++){
         solve();
      }

      scanner.close();
   }

   static void solve()
   {
      String initialWord = scanner.next();
      String finalWord = scanner.next();
      boolean ans=true;

      // System.out.println(initialWord + " " + finalWord);
      int i=0; int j=0;
      while (i<initialWord.length() && j<finalWord.length()) //
      {
         if (initialWord.charAt(i) == finalWord.charAt(j)) {
            i++; j++;
            continue;
         }
         int jCopy = j;
         while(j>=0)
         {
            if (finalWord.charAt(jCopy) == initialWord.charAt(i)) {
               j = jCopy;
               continue;   //better apply backtracting recursively
            }
            j--;
         }
      }


      String answer = ans ? "YES" : "NO";
      System.out.println(answer);
   }
}