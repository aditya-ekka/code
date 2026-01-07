// package JAVA;
// package banking program;
import java.util.Scanner;

public class bank {
   static Scanner scanner = new Scanner (System.in);
   static double balance = 1000;
   public static void main (String[] args) {
      
      //declare variables
      int userChoice;

      // display menu
      do {
         System.out.println("********************\nBank Program\n********************");
         System.out.println("1. Check balance");
         System.out.println("2. Withdraw");
         System.out.println("3. Deposite");
         System.out.println("4. Exit");
         System.out.println("********************");

         //process user choice
         System.out.print("Select 1-4 : ");
         userChoice = scanner.nextInt();

         switch (userChoice) {
            case 1 -> checkBalance();
            case 2 -> withdraw();
            case 3 -> deposite();
            case 4 -> exit();
            default -> System.out.println("You've selected an unlisted option!");
         }

      } while(userChoice != 4);

      exit();
      scanner.close();
   }

   static double checkBalance()
   {
      System.out.printf("Your current account balance is INR %,.2f\n", balance);
      return balance;
   }
   
   static double withdraw()
   {
      System.out.print("Enter amount to withdraw : ");
      double amount = scanner.nextDouble();

      if (amount < 0 ) {
         System.out.println("Withdrawl amount can't be negative!");
         return -1;
      }
      
      if (amount < 500) {
         System.out.println("You can't withdraw less than INR 500");
         return -1;
      }

      if (amount > balance) {
         System.out.println("Insufficient Balance!");
         return -1;
      }
      balance -= amount;
      
      System.out.printf("You've successfully withdrawl INR %,.2f amount\n", amount);
      checkBalance();

      return amount;
   }

   static double deposite()
   {
      System.out.print("Enter amount to deposite: ");
      double amount = scanner.nextDouble();
      
      if (amount < 0) {
         System.out.println("Deposit amount can't be negative");
         return -1;
      }

      if (amount < 500) {
         System.out.println("You can't deposite less than INR 500");
         return -1;
      }

      balance += amount;

      System.out.printf("You've successfully deposited INR %,.2f amount\n",amount);
      checkBalance();

      return amount;
   }

   static void exit()
   {
      System.out.println("Thanks for banking with SBI.");
   }
}