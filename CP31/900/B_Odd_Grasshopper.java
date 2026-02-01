//TLE 900 Odd Grasshopper
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
      long i, n;
      i = scanner.nextLong();
      n = scanner.nextLong();

      long f;
      // if (n%2 == 0){
      //    f = -1 * n/2;
      // } else {
      //    f = (1-3*n)/2;
      // }

      // if (i%2 != 0){
      //    f = i - f;
      // } else {
      //    f += i;
      // }

      if (i%2 == 1)
      {
         //brueforce

      }
      else
      {
         int ans = i;
         for(long j=1; j<n%4; j++){
            if(j==1){
               ans -= (n/4)*4;
            }
         }

      }





      System.out.println(f);
   }
}
/*
given: i, n
to find: f?
even -> left jump
odd -> right jump

if i is even : i, i-1, (i-1)+2, (i-1+2)+3, ()-4, ()-5, ()+6, ()+7, ()-8
               ev od-1   od1        ev4     ev0  od-5  od1    ev8    ev0

   1#  a -= n;
   2#  a  = 1;
   3#  a  = 




if i is odd : i, i-1, ()-2, ()-3,  ()+4   ()+5  ()-6  ()+7  ()-8  ()-9  ()+10    ()+11
              o1  e0   e-2   o-5    o-1    e4   o-1   e6    e-2   o-11  o-1      o9
*/