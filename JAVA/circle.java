// package JAVA;
// package circle;
import java.util.Scanner;

public class circle {
   public static void main (String[] args) {
      //calculate area and perimeter of a circle, taking user input & using math class, using double data type
      double radius;
      Scanner scanner = new Scanner(System.in);

      System.out.print("Enter radius: ");
      radius = scanner.nextDouble();

      double area = Math.PI * Math.pow(radius, 2);
      double perimeter = 2 * Math.PI * radius ;

      System.out.print("You want Area and Circumference, right? (Yes/no) : ");
      boolean userChoice = true;
      String tempVar = scanner.next();
      if (tempVar.equals("no") || tempVar.equals("No") || tempVar.equals("N")) {
         userChoice = false;
      }

      if (userChoice) {
         //print area and circumference using printf
         System.out.printf("Area of Circle is %.2f\n",area);
         System.out.printf("Circumference of Circle is %.2f\n",perimeter);
      }else{
         System.out.println("Oops! Sorry, I haven't anything for ya!\n");
      }
      
      scanner.close();
   }
}
