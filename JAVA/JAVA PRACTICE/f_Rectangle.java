/*
6. Create a class Rectangle with attributes length and width, each defaulting to 1. The class should include set and get methods for both attributes, and a method to calculate the area of the rectangle.
*/

class f_Rectangle {
   private double length;
   private double width;
   private double area;

   void f_Rectangle() {
      this.length = 1;
      this.width = 1;
   }
   void f_Rectangle (double l, double w){
      this.length = l;
      this.width = w;
   }

   void setDimension (double l, double w)
   {
      this.length = l;
      this.width = w;
   }

   void setLength (double x)
   {
      this.length = x;
   }
   void setWidth (double x)
   {
      this.width = x;
   }
   double getLength()
   {
      return this.length;
   }
   double getWidth()
   {
      return this.width;
   }

   double area()
   {
      this.area = this.length * this.width ;
      return this.area;
   }
}

//use conditionals to check if dimension > 0 in setter
