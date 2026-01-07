
import java.util.HashMap;

public class hashMap {
   public static void main (String[] args){
      HashMap <String, Double> map = new HashMap<>();


      map.put ("apple", 5.0);
      map.put ("orange" , 42.4);
      map.put ("banana", 24.4);

      map.put("orange", 12.2);
      //can have same key, but with different value;
      //this overwrites previous value

      System.out.println(map);
      //{orange=12.2, banana=24.4, apple=5.0}
      
      map.remove("apple");
      System.out.println(map.get("orange")); //value
      System.out.println(map.containsKey("banana"));
      System.out.println(map.containsValue(5.0));
      // don't use 5 instead of 5.0
      System.out.println(map.size());

      System.out.println(map.keySet());


      for (String key: map.keySet()) {
         System.out.print(key + " ");
      }
      
      
   }
}
