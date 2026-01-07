import java.io.BufferedReader;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.IOException;

public class read {
   /**
    * @param args
    */
   public static void main(String[] args)
   {
      String filepath = "/home/adie/Desktop/testfile.txt";
      
      try (BufferedReader reader = new BufferedReader(
                                   new FileReader(filepath)
                                   ))
      {
            String line;
            while((line = reader.readLine()) != null) {
               System.out.println(line);
            }

      }
      catch (FileNotFoundException e)
      {
         System.out.println("File not Found!");
      }
      catch (IOException e)
      {
         System.out.println("Something went wrong");
      }
      finally{
         System.out.println("we fell to finally block!");  
      }
   }
}
