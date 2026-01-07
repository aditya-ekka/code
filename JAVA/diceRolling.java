// package JAVA;
// package dice rolling;
import java.util.Scanner;
import java.util.Random;

public class diceRolling {
   public static void main (String[] args)
   {
      //declare variables
      Scanner scanner = new Scanner(System.in);
      Random random = new Random();
      int n;

      //take user input n
      do {
         System.out.print("How many times to roll the dice: ");
         n = scanner.nextInt();
         System.out.println();
      } while (n<1);

      //get random numbers, n times
      for (int i=0; i<n ; i++)
      {
         int diceNum = random.nextInt(1,7);
         System.out.printf("Your dice got %d\n",diceNum);
         printString(diceNum);
      }

      scanner.close();
   }

   static void printString(int x)
   {
      //display ASCII character
      String dice1 = """
         -----------
         |         |
         |    O    |
         |         |
         -----------
         """;
      String dice2 = """
         -----------
         |         |
         |  O   O  |
         |         |
         -----------
         """;
      String dice3 = """
         -----------
         | O       |
         |    O    |
         |       O |
         -----------
         """;
      String dice4 = """
         -----------
         |    O    |
         |  O   O  |
         |    O    |
         -----------
         """;
      String dice5 = """
         -----------
         | O     O |
         |    O    |
         | O     O |
         -----------
         """;
      String dice6 = """
         -----------
         |  O   O  |
         |  O   O  |
         |  O   O  |
         -----------
         """;

      switch (x) {
         case 1 -> System.out.println(dice1);
         case 2 -> System.out.println(dice2);
         case 3 -> System.out.println(dice3);
         case 4 -> System.out.println(dice4);
         case 5 -> System.out.println(dice5);
         case 6 -> System.out.println(dice6);
      }

   }
}
