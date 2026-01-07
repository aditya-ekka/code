// package JAVA;
import java.util.concurrent.TimeoutException;

public class countdown{
   public static void main (String[] args) throws InterruptedException {
      int countdown = 10;
      for(int i=countdown; i>0; i--) {
         System.out.println(i);
         Thread.sleep(100);
      }
      System.out.println("Happy New Year!");
   }
}