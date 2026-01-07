// package JAVA;
// package cph template;
import java.util.Scanner;

public class codeforces {
   static Scanner scanner = new Scanner(System.in);
   public static void main(String[] args)
   {
      int testcase;
      testcase = scanner.nextInt();
      // scanner.nextLine(); use if next data to be taken on input is a String
      while(testcase > 0){
         adie();
         testcase-- ;
      }
      scanner.close();
   }

   static void adie()
   {
      int n = scanner.nextInt();
      //if array is integer type (let's suppose)
      int[] ar = new int[n];
      for(int i=0; i<n; i++){
         ar[i] = scanner.nextInt();
      }

      //solve
   }
}
