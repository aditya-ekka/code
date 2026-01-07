import java.util.ArrayList;
import java.util.Random;
import java.util.Scanner;

public class bankOops {
   static Random random = new Random();
   static Scanner scanner = new Scanner(System.in);

   public static void main (String[] args)
   {
      boolean userCardStatus;
      int userCardNumber;
      int userPin;
      boolean incorrectEnter = false;
      int attempt = 3;

      System.out.println("insert your banking card here");
      //checks userCardStatus (checked by machine)
      System.out.print("userCardStatus : ");           //
      userCardStatus = scanner.nextBoolean();            //

      System.out.println("\nCARD BANKING PROGRAM\n");
      
      //if new card, create new account; else use the card
      if (userCardStatus) {
         //read card number (checked by machine)
         do {
            if(incorrectEnter){
               System.out.println("INVALID INPUT!");
            }
            System.out.print("Enter Card Number : ");
            userCardNumber = scanner.nextInt();
            //checked in database
            //if found
               break;
         } while (attempt>0);

         if (attempt == 0) {
            System.out.println("INVALID CARD NUMBER\nPlease try again later!");
            exit();
         } else {
            System.out.println("ENTER PIN : "); //4 digit pin
            userPin = scanner.nextInt();
            // if not matched -> exit
         }
         useCard(userCardNumber);
      } else {
         createAccount();
      }
   }


   static void useCard(int userCardNumber)
   {
      System.out.println("""
         1. Print User Details
         2. Check Balance
         3. Withdrawal
         4. Deposition
         5. Transaction
         6. Transaction History
         7. Exit
            """);
      System.out.print("Enter a choice: ");
      int userChoice = scanner.nextInt();

      switch (userChoice)
      {
         // case 1 -> printUserDetails(userCardNumber);
         // case 2 -> checkBalance(userCardNumber);
         // case 3 -> withdrawl(userCardNumber);
         // case 4 -> deposition(userCardNumber);
         // case 5 -> transaction(userCardNumber);
         // case 6 -> history(userCardNumber);
         case 7 -> exit();
         default -> {
            System.out.println("Incorrect Choice!");
            exit();
         }         
      }
   }

   // =========================================================
   static public abstract class Bank
   //abstract or interface to not be able to create an object
   {
      static ArrayList<Account> accounts = new ArrayList<>();
      static int numOfAccounts = 0;
   }

// =========================================================
   static public class Account
   {
      Name accountHolder; //contains first, middle, last name;
      int accountNumber; //five digits
      private double balance;

      Account (String first, String mid, String last, double bal)
      {
         // this.accountHolder = name;
         this.accountHolder.firstName = first;
         this.accountHolder.middleName = mid;
         this.accountHolder.lastName = last;
         this.balance = bal;
         this.accountNumber = newAccountNumber();
         //
         // Bank.accounts.add(this.accountNumber);
         Bank.numOfAccounts ++ ;
      }
      
      // CREATE SOME USEFUL FUNCTIONS
      
      //1. account creation (constructor)
      
      //2. balance check
      double showBalance()
      {
         System.out.printf("Your current account balance is $%,.2f\n",this.balance);
         System.out.println( inWords(this.balance) );
         return this.balance;
      }

      //3. deposit money

      //4. withdraw money
   }

// =========================================================

   static public class Name
   {
      String firstName = "";
      String middleName = "";
      String lastName = "";
   }
   

   static public String inWords (double number)
   {  
      String s = "(";
      String t = Double.toString(number);

      t += "000";
      t = t.substring(0, t.indexOf('.')+3);
      
      for(int i=0; i<t.length()-3; i++ ){
         s += digitToWord(t.charAt(i));
      }
      s += "Dollar & ";
      s += digitToWord(t.charAt(t.length()-2));
      if (t.charAt(t.length()-2) == '0' &&
          t.charAt(t.length()-2) == '1') {
            s += digitToWord(t.charAt(t.length()-1));
      }
      s += "Cent)";
      return s;
   }

   static public String digitToWord (char num)
   {
      switch (num) {
          case '0' : return "Zero ";
          case '1' : return "One ";
          case '2' : return "Two ";
          case '3' : return "Three ";
          case '4' : return "Four ";
          case '5' : return "Five ";
          case '6' : return "Six ";
          case '7' : return "Seven ";
          case '8' : return "Eight ";
          case '9' : return "Nine ";
          default  : return "Digit to Word conversion error ";
      }
   }

   static public int newAccountNumber()
   {
      boolean accountAlreadyExist = false;
         do { 
            int num = random.nextInt(10000, 100000);
            for(int accountNumber: Bank.accounts){
               if( num == accountNumber) {
                  accountAlreadyExist = true;
                  break;
               }
            }
            if (!accountAlreadyExist) {
               return num;
            }
         } while (accountAlreadyExist);
         return -1;
   }

   static public void createAccount ()
   {
      String first;
      String mid;
      String last;
      
      System.out.println("* must have to be filled.");
      System.out.println("Enter a dot (.), if not applicable.");

      do{
         System.out.print("First Name* : ");
         first = scanner.next();
         boolean validFirstName = true;
      } while (first.isEmpty());

      System.out.print("Middle Name : ");
      mid = scanner.next();

      System.out.print("Last Name : ");
      last = scanner.next();
      
      double bal = 0;
      System.out.print("Initial Deposits : ");
      bal = scanner.nextDouble();

      // System.out.println(first + " " + mid + " " + last + " " + bal);
      
      Account  = new Account(first, mid, last, bal);
   }

   static public void exit()
   {
      System.out.println("Thanks for Using Card Banking Service!");
      System.out.println("Have a Good Day");
   }
}


//add password