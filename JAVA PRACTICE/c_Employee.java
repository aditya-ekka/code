/*
3. Create a class Employee with overloaded constructors to initialize employee details based on different combinations of arguments. Ensure the constructors support the creation of objects in various ways.
   -name
   -id
   -department
*/

public class c_Employee {
   private String name;
   private int id;
   private String dept;

   c_Employee (String name) {
      this.name = name;
   }

   c_Employee (int id) {
   this.id = id;
   }

   c_Employee (String name, int id) {
      this.name = name;
      this.id = id;
   }

   c_Employee (String name, int id, String dept) {
      this.name = name;
      this.id = id;
      this.dept = dept;
   }

   //may create even more combinations and permutations

   void printDetails(){
      System.out.println("Name : " + this.name);
      System.out.println("Id : " + this.id);
      System.out.println("Department : " + this.dept);
   }

   public static void main(String[] args) {
      c_Employee employee = new c_Employee("Aditya Ekka", 786, "CSE" );
      employee.printDetails();
   }
   
}
