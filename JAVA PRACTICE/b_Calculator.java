/*
2. Create a class Calculator with the following methods:
calculateSum(int number1, int number2) to calculate the sum of two numbers.
calculateDifference(int number1, int number2) to calculate the difference between two numbers.
*/

public class b_Calculator {

   public static void main(String[] args){
      Calculator c = new Calculator();
      System.out.println( c.calculateSum(1,2));
      System.out.println(c.calculateDifference(1, 2));
   }

   public static class Calculator {

      int calculateSum (int number1, int number2){
         return number1 + number2 ;
      }

      int calculateDifference (int number1, int number2){
         return number1 - number2 ;
      }

   }
}