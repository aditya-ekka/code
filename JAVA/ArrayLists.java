// import java.util.ArrayList;

import java.util.ArrayList;
import java.util.Collections;

public class ArrayLists {
   public static void main(String[] args)

   {
      ArrayList<Integer> list = new ArrayList();
      // ArrayList<Integer> list2 = new ArrayList<>();

      list.add(3);                 //
      list.add(4);
      System.out.println(list);     //
      list.remove(0);         //
      System.out.println(list);
      list.add(5);
      System.out.println(list);
      list.set(1,69);   //
      System.out.println(list);
      System.out.println(list.size()); //

      list.add(5);
      System.out.println(list.get(2)); //
      System.out.println(list);

      Collections.sort(list);       //
      for (int number : list)
      {
         System.out.print(number + " ");
      }




   }
}
