
import java.util.Scanner;

public class B_Odd_Grasshopper {
   static Scanner scanner = new Scanner(System.in);
    public static void main(String[] args) {
      int testcase = scanner.nextInt();
      while (--testcase > 0){
         adie();
      }
    }
   public static void adie(){
      long in, n;
      in = scanner.nextLong();
      n = scanner.nextLong();

      long fi;
      if (n%2 == 0){
         fi = -1 * n/2;
      } else {
         fi = (1-3*n)/2;
      }

      if (in%2 != 0){
         fi = in - fi;
      } else {
         fi += in;
      }

      System.out.println(fi);
   }
}