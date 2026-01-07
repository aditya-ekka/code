public class add {
   public static void main(String[] args)
   {
      System.out.println(add(3,4));
      System.out.println(add(4));
      // System.out.println(add("Hello ","adi",4));
      System.out.println(add("Hello ",4,6));
      System.out.println(add(4,"ntohu"));

      System.out.println(add("nto","ou"));
      System.out.println(add());
      System.out.println(add(4,5,6));

   }

   static int add (int... numbers)
   {
      int sum = 0;
      for (int number: numbers){
         sum += number;
      }
      return sum;
   }

   static String add (int x, String s)
   {
      return x + s ;
   }

   static String add (String s, String t)
   {
      return s + t ;
   }

   static String add (String s, int... numbers)
   {
      int sum = 0;
      for(int number: numbers){
         sum += number;
      }
      return s + sum;
   }
}
