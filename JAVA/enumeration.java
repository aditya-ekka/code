import java.util.Scanner;

public class enumeration{
   public static void main(String[] args)
   {
      // Day day = Day.SUNDAY;

      Scanner scanner = new Scanner(System.in);

      String response = scanner.next().toUpperCase();
      
      Day day = Day.valueOf(response); //

      System.out.println(day);
      System.out.println(day.getDayNumber());

      //usage in switch case

      switch (day) {
         case MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY -> System.out.println("It's weekday.");
         case SATURDAY, SUNDAY -> System.out.println("It's weekend");
         default -> System.out.println("Maybe a pizza day");
      }
   }

   public enum Day {
      SUNDAY(1), MONDAY(2), TUESDAY(3), WEDNESDAY(4), THURSDAY(5), FRIDAY(6), SATURDAY(7);

      private final int dayNumber;

      Day (int dayNumber) {
         this.dayNumber = dayNumber;
      }

      public int getDayNumber() {
         return this.dayNumber;
      }
   }
}