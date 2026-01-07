// package Date and Time;

import java.time.Instant;
import java.time.LocalDate;
import java.time.LocalDateTime;
import java.time.LocalTime;
import java.time.format.DateTimeFormatter;

public class dateTime {
   
   public static void main(String[] args) {

      LocalTime time = LocalTime.now();
      LocalDate date = LocalDate.now();
      LocalDateTime dateTime = LocalDateTime.now();

      Instant instant = Instant.now();
      
      System.out.println(time);
      System.out.println(date);
      System.out.println(dateTime);
      System.out.println(instant);
      System.out.println(  );

      //date-time formatting
      DateTimeFormatter formatter = DateTimeFormatter.ofPattern(
         "HH:mm:ss a dd-MM-yyyy"
         );
      String text = dateTime.format(formatter);
      
      System.out.println(text);
      System.out.println();

      //
      LocalDate dateOf = LocalDate.of(2012,4,3);
      LocalTime timeOf = LocalTime.of(5,59,51);
      LocalDateTime dateTimeOf = LocalDateTime.of(dateOf, timeOf);

      System.out.println(dateOf);
      System.out.println(timeOf);
      System.out.println(dateTimeOf);
      System.out.println();

      //isAfter, isBefore, isEqual
      System.out.println(dateTimeOf.isBefore(dateTime)); 
   }

}
