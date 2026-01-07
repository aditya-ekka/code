// package basic maths;

public class reverseNumber {
   
   static int reverse (int n) //using maths
   {
      int x = 0;

      while(n > 0) {
         x *= 10 ;
         x += n%10 ;
         n /= 10 ;
      }

      return x;
   }

   static int reverseMe (int n) //using String data type
   {
      String s = Integer.toString(n);

      for (int i=0 ; i<s.length()/2; i++) {
         char tmp1, tmp2;
         tmp1 = s.charAt(i);
         tmp2 = s.charAt(s.length()-1 - i);
         // x[i] = x.charAt(x.length() - i ); doesn't works in java x[i]
         //use String builder | using char Array || substring
         s = s.substring(0,i) + tmp2 + s.substring(i+1, s.length()-1 -i ) + tmp1 + s.substring(s.length() -i);
      }

      int x = Integer.parseInt(s);

      return x;
   }

   public static void main (String[] args)
   {
      int n = 649713 ;
      System.out.println(reverse(n));
      System.out.println(reverseMe(n));
   }
}
