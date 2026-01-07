// package Hangman;
import java.io.BufferedReader;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Random;
import java.util.Scanner;

public class Hangman {
public static void main(String[] args) {
      //
   Random random = new Random();
   String filepath = "word.txt";
   ArrayList<String> words = new ArrayList<>();

   try(BufferedReader reader = new BufferedReader(new FileReader(filepath))){
      String line;
      while((line = reader.readLine()) != null){
         words.add(line.trim());
      }
   }catch (FileNotFoundException e){
      System.out.println("Couldn't find file :" + e);
   }catch (IOException e){
      System.out.println("Something went wrong " + e);
   }


   Scanner scanner = new Scanner(System.in);
   System.out.println(">>>>>>>>>>>>\nHANGMAN GAME\n>>>>>>>>>>>>\n\nguess the word; letter by letter\n");
   
   String word=words.get(random.nextInt(words.size()));
   int incorrectGuess = 0;
   int correctGuess = 0;
   char guess;
   
   ArrayList<Character> w = new ArrayList<>();

   for(int i =0; i<word.length(); i++){
      w.add('_');
   }

   // printw(w);
   while(incorrectGuess<6){
      printw(w);
      
      System.out.print("make a guess: ");
      guess = scanner.next().charAt(0);

      for(int i=0; i<word.length(); i++){
         if(guess == word.charAt(i)){
            if (w.get(i) == '_') {
               w.set(i, guess);
               incorrectGuess-- ;
               correctGuess++ ;
               break;
            }
         }
      }

      incorrectGuess++ ;
      
      
      if (correctGuess == word.length()){
         //win
         System.out.println("You Win!");
         return;
      }
      System.out.println("INCORRECT GUESS : " + incorrectGuess);
      System.out.println(printascii(incorrectGuess));
      printascii(incorrectGuess);

   }
   System.out.println("""
         Oops! You loose!
         """);
   
}


static void printw (ArrayList word)
{
   for ( Object c : word )
   {
      System.out.print(c + " ");
   }System.out.println();
}


static String printascii (int num)
{
   return switch (num) {
      case 0 -> """
            


            """;
      case 1 -> """
               O

            """;
      case 2 -> """
               O
              /
            """;
      case 3 -> """
               O
              /|

            """;
      case 4 -> """
               O
              /|\\

            """;
      case 5 -> """
               O
              /|\\
              /
            """;
      case 6 -> """
               O
              /|\\
              / \\
            """;
      default -> "";
   };
}
















}
