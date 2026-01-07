// package JAVA;
import java.util.Scanner;
import java.util.Random;

public class stonePaperScissor {
   public static void main(String[] args)
   {
      String[] choices={"Stone", "Paper", "Scissor"};
      Scanner scanner = new Scanner (System.in);
      Random random = new Random();

      System.out.println("WELCOME TO THE GAME: STONE-PAPER-SCISSOR");
      System.out.println("========================");
      System.out.println("RULEBOOK:\nYou have to select one of the option (1-3):-");
      for (int i=0; i<choices.length; i++)
      {
         System.out.println(i+1 + ". " + choices[i] );
      }
      System.out.println("========================");
      while(true)
      {
         int compChoice = random.nextInt(0,3);
         System.out.print("STONE PAPER SCISSOR : ");
         String userChoice = scanner.next();

         if (userChoice.toLowerCase().equals( choices[(compChoice + 1)%3].toLowerCase() )) {
            System.out.printf("Computer Choice: %s\nYOU win!\n",choices[compChoice]);
         } else if (userChoice.toLowerCase().equals( choices[(compChoice +2)%3].toLowerCase() )) {
            System.out.printf("Computer Choice: %s\nCOMPUTER win!\n",choices[compChoice]);
         } else {
            System.out.printf("Computer Choice: %s\nNOBODY win!\n",choices[compChoice]);
         }
         System.out.println("========================");
      }
   }
}
