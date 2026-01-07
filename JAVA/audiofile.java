import java.io.File;
import java.io.FileNotFoundException;

import javax.sound.sampled.AudioInputStream;
import javax.sound.sampled.AudioSystem;
import javax.sound.sampled.Clip;

public class audiofile {
   // can't handle mp3 file (need other module)
   // let's play audio (.wav, .au, .aiff)

   public static void main(String[] args){
      String filepath = "";
      File file = new File (filepath);

      try (
         AudioInputStream audiostream = AudioSystem.getAudioInputStream(file);
      ){
         Clip clip = AudioSystem.getClip();
         clip.open(audiostream);
      }catch (FileNotFoundException e){
         System.out.println("File not found");
      }
   }


}
