package JAVA;
//retry
// package login page;
import java.util.Scanner;

public class loginPage{
   public static void main(String[] args){
      Scanner scanner = new Scanner(System.in);

      //tak e email and password and slice through username and domain, check neccesarry condition for password and loop it until it never corrects

      String email;

      do {
         System.out.print("Enter email: ");
         email = scanner.next();
         if (email.isEmpty()) {
            System.out.println("Empty email is not allowed!");
         }else{
            if(!(email.contains("@"))) {
               System.out.println("Not a valid email!");
            }
         }
      } while (email.isEmpty() || !(email.contains("@")));

      String username = email.substring(0, email.indexOf('@'));
      String domain = email.substring(email.indexOf("@") + 1);


      String password;
      //contains a number, uppercase char, lowercase char, symbol, and with minimum length of 8
      boolean hasNotUpperChar = true;
      boolean hasNotLowerChar = true;
      boolean hasNotNumber = true;
      boolean hasNotSymbol = true;
      boolean length = true;
      do {
         System.out.print("Enter password: ");
         password = scanner.next();
         //iterate and assign all variables
         if (password.length() < 8) {
            length = false;
            System.out.printf("Minimum length of password allowed is 8\n");
         } else {
            for (int i=0; i<password.length(); i++) {
               if ((int)(password.charAt(i)) > 95 && (int)(password.charAt(i)) < 120) {
                  hasNotLowerChar = false;
               }else if ( (int)(password.charAt(i)) > 64 && (int)(password.charAt(i)) < 82 ) {
                  hasNotUpperChar = false;
               }
               else if (((int)(password.charAt(i)) >= 48) && ((int)(password.charAt(i)) <= 57)) {
                  hasNotNumber = false;
               }
               else{
                  hasNotSymbol = false;
               }
            }

            if( hasNotSymbol || hasNotUpperChar || hasNotLowerChar || hasNotNumber){
               System.out.println("password must include uppercase, lowercase, number and symbol");
            }
         }
      } while ( length || hasNotSymbol || hasNotUpperChar || hasNotLowerChar || hasNotNumber );

      //output username, domain, and verify password
      System.out.printf("username : %s\n",username);
      System.out.printf("domain: %s\n",domain);
      System.out.println();
      System.out.println("You have successfully registered\n(Please remember your password for future references)");

      scanner.close();
   }
}
