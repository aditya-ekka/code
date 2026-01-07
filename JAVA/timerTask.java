import java.time.LocalTime;
import java.util.Timer;
import java.util.TimerTask;

public class timerTask {
   public static void main(String[] args) {

      
      Timer timer = new Timer();
      TimerTask task = new TimerTask(){
         @Override
         public void run() {

            while(true){
               LocalTime time = LocalTime.now();
               if (time.equals(LocalTime.of(12,8,0))){
                  System.out.println("Happy New Year");
                  return;
               }
               System.out.println(time);
            }

         }
       };
       timer.schedule(task, 2000,(int)(Math.PI));
   }
}
