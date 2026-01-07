package JAVA;
import java.util.Random;

public class randomModule{
   public static void main (String args[]){

      Random rand = new Random();
      int x = rand.nextInt(1,10);
      double y = rand.nextDouble(1,10);

      System.out.println(x);
      System.out.println(y);
   }
}