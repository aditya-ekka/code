/*
4. Create a class SeriesCalculator with a method calculateSum(int n) to calculate the sum of the first n numbers in the series 1 + 3 + 5 + 7 + .... Use the formula Sum = (n/2) * [2*a + (n-1)*d], where "a" is the first term and "d" is the common difference
*/
public class d_SeriesCalculator{

   int calculateSum (int n) {
      return n*n; //this is what it simplifies to
   }

   public static void main (String[] args) {
      d_SeriesCalculator seriesCalculator = new d_SeriesCalculator();
      System.out.println(seriesCalculator.calculateSum(4));
   }
}