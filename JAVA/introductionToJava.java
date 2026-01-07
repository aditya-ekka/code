package JAVA;
import java.util.Scanner;

public class introductionToJava {
    public static void main(String[] args) {
        System.out.print("who are you?\n");
        System.out.println("Hello, Java.");

    //VARIABLES
        // Primitive data types (stores in stack)
        int age;
        age = 18 ;
        char alpha = 'A';
        double price = 18.9;
        // boolean canHelp = false;

        System.out.println(age);
        System.out.println(alpha);
        System.out.println("Price of wheat is $" + price);

        //Reference data types (stores in heap)
        String word = "aditya ekka";
        //array
        //object
        System.out.println(word);
    
    //USER INPUT

        Scanner scanObj = new Scanner(System.in);
        int i = scanObj.nextInt();
        double d = scanObj.nextDouble();
        float f = scanObj.nextFloat();
        boolean b = scanObj.nextBoolean();
        // char c = scanObj.next();
        // string s = scanObj.next();
        // string st = scanObj.nextLine();

        System.out.println("integer data "+ i);
        System.out.println("double data : " + d);
        System.out.println("float data : " + f);
        System.out.println("boolean data : " + b);
        // System.out.println("character data : " + c);
        // System.out.println("string data : " + s);
        // System.out.println("string data : " + st);

        scanObj.close();
    }
}
