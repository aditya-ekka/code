public class countDigits{
   public static void main(String[] args) {
      int n = 64425;
      // change n's value
      System.out.println(digits(n));
   }

   static int digits(int n){
      int x = 0;

      while(n>0){
         x++;
         n /= 10;
      }

      return x;
   }
}
