import java.util.Random;

public class musicBeat {
   public static void main(String[] args)
   {
      Random random = new Random();
      while(true){
         int num = random.nextInt(3,20);
         for(int i=0; i<num; i++)
            System.out.print("|");
         System.out.println();
      }
   }
}
