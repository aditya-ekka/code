// 1. Create a class MessagePrinter with a method printMessage(String name) which prints the message "hello <name>".

public class a_MessagePrinter {
  public static void main(String[] args) {

    String name = "Aditya Ekka";
    MessagePrinter ob = new MessagePrinter();
    ob.printMessage(name);

  }

  
  public static class MessagePrinter{
    
    void printMessage(String name) {
      System.out.println("Hello, " + name);
    }

  }
}