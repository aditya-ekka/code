package JAVA;
// package guess me (game);
import java.util.Scanner;
import java.util.Random;

public class guessMe {
   public static void main(String[] args){

      Scanner scanner = new Scanner(System.in);
      Random random = new Random();

      //welcome message
      System.out.println("You're playing NUMBER GUESSING game!");
      System.out.println("level 1 : 1-10\nlevel 2 : 1-100\nlevel 3 : 1-1000\nand so on...");

      //variable declaration
      int level;
      int userGuessCount=0;
      do{
         System.out.print("Select level : ");
         level = scanner.nextInt();
      } while (level <= 0);
      int randomNumber = random.nextInt(1, (int) Math.pow(10, level)+1);

      //guess me game
      int userGuess;
      do {
         System.out.printf("Guess me : ");
         userGuess = scanner.nextInt();
         userGuessCount++ ;
         if (userGuess == randomNumber) {
            System.out.println("Congratulations! You made right guess.");
            System.out.println("Attempt : " + userGuessCount);
            break; //something new
         } else if (userGuess > randomNumber) {
            System.out.print("too high :: ");
         } else {
            System.out.print("too low :: ");
         }
      } while (true);

      scanner.close();
   }
}
