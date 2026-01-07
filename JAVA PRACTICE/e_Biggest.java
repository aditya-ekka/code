/*
5. Create a class Biggest that contains a single-dimensional array as a data member and a method display() to find and display the largest element of the array.
*/
public class e_Biggest { //can be double or int anything (assuming to be an integer)
   private int[] array = new int[100];

   e_Biggest (int[] arr) {
      // System.arraycopy(arr, 0, array, 0, arr.length);  //array copy
      array[0] = 0;
      for (int i=0; i<arr.length; i++) {
         array[i] = arr[i];
      }
   }

   int display ()
   {
      int big = array[0]; //how to deal with it

      for(int element : array) {
         if (element > big) { big = element; }
      }

      System.out.println("Biggest element in array is " + big);
      return big;
   }

   public static void main(String[] args) {
      int[] arr = {2,5,5,2,7,4,9,1,8,5,1,3};
       e_Biggest biggest = new e_Biggest(arr);
       biggest.display();
   }

}
