
import java.io.FileNotFoundException;
import java.io.FileWriter;
import java.io.IOException;

public class write {
   public static void main(String[] args)
   {
      try {
         String filepath = "/home/adie/Desktop/testfile.txt";
         FileWriter writer = new FileWriter(filepath);
         String str = """
         write this
         """;
         writer.write(str);
         System.out.println("okay");
      } catch (FileNotFoundException e) {
         System.out.println("File Not Found!");
      } catch (IOException e) {
         System.out.println("Something went wrong");
      } finally {
         System.out.println("File has been written!");
         // writer.close();
      }
   }
}
