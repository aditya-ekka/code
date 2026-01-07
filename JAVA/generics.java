public class generics {
   public static void main (String [] args) {
      Box<String> box = new Box<>();
      box.setItem("hello");
      System.out.println(box.getItem());


   }

   static public class Box<T> {
      T item;

      public void setItem(T item) {
         this.item= item;
      }
      
      public T getItem() {
         return item;
      }

   }
}
