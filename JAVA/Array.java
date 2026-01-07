// package JAVA;
import java.util.Arrays;
import java.util.Scanner;

public class Array {
   public static void main(String[] args)
   {
      Scanner scanner = new Scanner(System.in);
      String[] fruit = {"apple", "orange", "banana", "grapes", "almond"};

      // System.out.println(fruit.length);

      int[] number = {14, 6, 27, 8};

      //sorting string array
      for (String fr : fruit) {
         System.out.print(fr+" ");
      }
      System.out.println();

      Arrays.sort(fruit);
      for (String i: fruit) {
         System.out.print(i + " ");
      }
      System.out.println();

      //sorting integer array

      for(int i: number){
         System.out.print(i + " ");
      }System.out.println();

      Arrays.sort(number,0, number.length);

      for(int i: number) {
         System.out.print(i + " ");
      } System.out.println();

      //Arrays.fill (fruit,"val")
      Arrays.fill (fruit, "banana");
      for(String i: fruit){
         System.out.print(i + " ");
      }System.out.println();

      //USER INPUT ARRAY
      String foods[] = new String[4];
      // System.out.println(foods.length);
      for(int i=0; i<foods.length; i++){
         foods[i] = scanner.next();
      }
      for(String s: foods){
         System.out.print(s + " ");
      }System.out.println();
   }
}
// note arrays are fixed in size