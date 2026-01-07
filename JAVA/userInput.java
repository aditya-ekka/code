package JAVA;
import java.util.Scanner;

public class userInput {
   public static void main (String args[]) {

      Scanner scanner = new Scanner(System.in);

      System.out.print("Tell me an integer: ");
      int number = scanner.nextInt();
      // scanner.nextLine();
      System.out.print("Enter your name: ");
      String name = scanner.nextLine();
      System.out.println(number);
      System.out.println("Hello, " + name);

      scanner.close();
   }
}
