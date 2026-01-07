// package basic maths;

public class palindrome {
   static boolean isPalindrome(int n) //matching two indexes at a time, using String
   {
      String s = Integer.toString(n);
      int len = s.length();

      for (int i=0; i<len/2; i++) {
         if (s.charAt(i) != s.charAt(len-i-1)) {
            return false;
         }
      }

      return true;
   }

   public static void main (String[] args)
   {
      int n =644151446;
      if (isPalindrome(n)) {
         System.out.println(n + " is a palindrome!");
      } else {
         System.out.println(n + "is NOT a palindrome!");
      }
   }
}
