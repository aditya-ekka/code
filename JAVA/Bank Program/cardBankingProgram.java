import java.util.ArrayList;
import java.util.Random;
import java.util.Scanner;

public class cardBankingProgram {
   static Scanner scanner = new Scanner(System.in);
   static Random random = new Random();
   
   public static void main (String[] args)
   {
      //coding edit /tmp

      Account acc = new Account(11111, "Adie", "", "Ekka", 1000);
      Passphrase pass = new Passphrase(11111, 0000, acc);
      // Bank.Accounts.add(acc);
      Bank.Passphrases.add(pass);
      Bank.customerCount++;

      // userDetails(acc);
      // checkBalance(acc);
      // withdraw(acc);
      // deposit(acc);
      // checkBalance(acc);


      /////////////
      boolean userCardStatus;
      int userCardNumber;
      int userPin;
      int attempt = 3;

      // newCard vs oldCard identification
      System.out.println("insert your banking card here");
      System.out.print("userCardStatus (true/false): ");
      userCardStatus = scanner.nextBoolean();

      System.out.println("\nCARD BANKING PROGRAM");
      System.out.println("==========================================");
      
      if (!userCardStatus){ // createNewAccount();
         createAccount();
         exitProgram();
         return;
      }
      
      // id pass verification to use card
      do {
         if(attempt<3){
            System.out.println("INVALID CARD NUMBER!");
         }
         System.out.print("Enter Card Number : ");
         userCardNumber = scanner.nextInt();
         for(Passphrase account: Bank.Passphrases){
            if(account.accountNumber == userCardNumber){

               System.out.print("ENTER PIN : ");
               userPin = scanner.nextInt();
               
               if (userPin == account.getPass()){
                  // useCard(account);
                  useCard(account);
               } else {
                  System.out.println("INVALID PASS!");
                  exitProgram();
               }

               return;
            }
         }
         attempt-- ;
      } while (attempt>0);

      if (attempt == 0) {
         System.out.println("INVALID CARD NUMBER\nPlease try again later!");
         exitProgram();
      } 
   }

   public static class Account
   {
      Name accountHolder;
      final int accountNumber;
      private double balance;

      Account (int accountNumber, String first, String mid, String last, double bal)
      {
         this.accountNumber =accountNumber;
         this.balance = bal;
         this.accountHolder = new Name();
         this.accountHolder.firstName = first;
         this.accountHolder.middleName = mid;
         this.accountHolder.lastName = last;
      }
      
      //1. account creation
      //2. balance check
      double getBalance()
      {
         return this.balance;
      }
      double setBalance (double amount)
      {
         this.balance += amount;
         return this.balance;
      }
      //3. deposit money
      //4. withdraw money
   }

   static public class Passphrase
   {
      int accountNumber;
      private int pass;
      private Account account;
      //stores address of Account class for this account
      // Account* acc = &Account;

      Passphrase(int acc, int pass, Account account)
      {
         this.accountNumber = acc;
         this.pass = pass;
         this.account = account;
      }

      int getPass()
      {
         return pass;
      }
      void setPass(int num)
      {
         this.pass = num;
      }

      //I hope this passes by reference; not get a copy of values
      Account getAccount(int pass)
      {
         if(pass == this.pass){
            return this.account;
         }
         Account falseAccount = new Account(0, "null", "null", "null", 0);
         return falseAccount;
      }
   }

   static public abstract class Bank
   {
      static ArrayList<Passphrase> Passphrases = new ArrayList<>();
      // static ArrayList<Account> Accounts = new ArrayList<>();
      // I wanted to store address of accounts in passphrases; but I haven't learnt anything like that, 
      static int customerCount = 0 ;
   }

// =======handling suboptions================

static public void createAccount ()
{
   int newAccNum = newAccountNumber();
   
   String first;
   String mid;
   String last;
   
   System.out.println("CREATING NEW ACCOUNT...\n");
   System.out.println("* must have to be filled.");
   System.out.println("Enter a dot (.), if not applicable.\n");
   
   scanner.nextLine();
   do{
      System.out.print("First Name* : ");
      first = scanner.nextLine();
   } while (first.isEmpty() || !isValidName(first));
   
   do {
      System.out.print("Middle Name : ");
      mid = scanner.nextLine();
      if(mid.equals(".")) mid = "";
   } while (!(isValidName(mid)) && !(mid.equals(".")));

   do {
      System.out.print("Last Name : ");
      last = scanner.nextLine();
      if(last.equals(".")) last = "";
   } while (!(isValidName(last)) && !(last.equals(".")));
   
   double bal = 0;
   do { 
      if (bal < 0){
         System.out.println("Deposits can not have negative value");
      }
      System.out.print("Initial Balance : ");
      bal = scanner.nextDouble();
   } while (bal <= 0);
   
   // Bank.Accounts.add (new Account (newAccNum, first, mid, last, bal));
   System.out.println("Account Details have been set successfully!");

   scanner.nextLine();
   String userPass; String confirmPass="-1";
   System.out.println();
   do { 
      System.out.print("set password (4-digits) : ");
      userPass = scanner.nextLine();
      if (userPass.length() != 4) continue;
      System.out.print("Confirm password : ");
      confirmPass = scanner.nextLine();
   } while (!userPass.equals(confirmPass));

   Passphrase newPassphrase = new Passphrase(newAccNum, Integer.parseInt(userPass), new Account (newAccNum, first, mid, last, bal));

   Bank.Passphrases.add (newPassphrase);
   System.out.println("Password have been set successfully!\n");
   System.out.println("Congratulation! You have successfully created a new account!\n");
   Bank.customerCount++ ;

   useCard (newPassphrase);
}

static void useCard(Passphrase passphrase)
{
   int userChoice;

   do { 
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
      userChoice = scanner.nextInt();

      System.out.println("....................");

      switch (userChoice)
      {
         case 1 -> userDetails(passphrase.getAccount(passphrase.getPass()));
         case 2 -> checkBalance(passphrase.getAccount(passphrase.getPass()));
         case 3 -> withdraw(passphrase.getAccount(passphrase.getPass()));
         case 4 -> deposit(passphrase.getAccount(passphrase.getPass()));
         case 5 -> transaction(passphrase.getAccount(passphrase.getPass()));
         // case 6 -> history(userCardNumber);
         case 7 -> exitProgram();
         default -> {
            System.out.println("Invalid Choice!");
            exitProgram();
            return;
         }         
      }
   } while (userChoice <6 && userChoice>0);
}


// ===========bin===========================

   //          1. Print User Details
   static public void userDetails (Account account)
   {
      String name = account.accountHolder.firstName + " ";
      if(account.accountHolder.middleName != ""){
         name += account.accountHolder.middleName + " ";
      }
      name += account.accountHolder.lastName;
      System.out.printf("""
            USER ACCOUNT DETAILS
            Name : %s
            Account Number : %d
            Checking balance : (hidden)
            """, name,
            account.accountNumber);
   }
   //          2. Check Balance
   static public double checkBalance (Account account)
   {
      System.out.printf("Your current account balance is $%,.2f\n",account.getBalance());
      System.out.println( inWords(account.getBalance()) );
      return account.getBalance();
   }
   //          3. Withdrawal
   static public boolean withdraw (Account account)
   {
      double amount;
      System.out.print("Enter the Amount to withdraw : ");
      amount = scanner.nextDouble();
      account.setBalance((-1)*amount);
      System.out.printf("You have successfully withdrawal $%.2f.\n",amount);
      return true;
   }
   //          4. Deposition
   static public boolean deposit (Account account)
   {
      double amount;
      System.out.print("Enter the Amount to Deposit : ");
      amount = scanner.nextDouble();
      account.setBalance(amount);
      System.out.printf("You have successfully deposited $%.2f.\n",amount);
      return true;
   }
   //          5. Transaction
   static public boolean transaction (Account account)
   {
      int toAccountNumber;
      double amount;

      System.out.println("TRANSACTION/");
      System.out.print("Enter account number to send money on : ");
      toAccountNumber = scanner.nextInt();

      System.out.print("Enter amount to send : ");
      amount = scanner.nextDouble();

      for (Passphrase passphrase: Bank.Passphrases) {
         if (toAccountNumber == passphrase.accountNumber){

            System.out.println("Trasactioning...");

            if(account.getBalance() < amount) {
               System.out.println("ERR\\Insufficent Balance");
               return false;
            }

            //deduct from user
            account.setBalance(-1*amount);
            //credit to account
            //got a broken hole to set others balance
            passphrase.account.setBalance(amount);
            System.out.println("Transaction completed!");
            return true;
         }
      }
         System.out.println("ERR\\Account Not Found");
         return false;
   }
   //          6. Transaction History
   //          7. Exit


// ===========bin===========================

   static public class Name
   {
      String firstName;
      String middleName;
      String lastName;
   }

   static public int newAccountNumber()
   {
      boolean accountAlreadyExist = false;
         do { 
            int num = random.nextInt(10000, 100000);
            for(Passphrase account: Bank.Passphrases){
               if( num == account.accountNumber) {
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

   static public void exitProgram()
   {
      System.out.println("\nThanks for Using Card Banking Service!");
      System.out.println("Have a Good Day");
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

   static public boolean isValidName ( String name )
   {
      boolean isLetter = true;
      for(int i=0; i<name.length(); i++){
         char letter = name.charAt(i);
         if (! (Character.isLetter(letter))){
            isLetter = false;
            break;
         }
      }

      return isLetter;
   }

}