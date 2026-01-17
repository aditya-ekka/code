class g_OverrideToStringMethod {
   
   private String firstName;
   private String lastName;

    public g_OverrideToStringMethod(String fName, String lName) {
      this.firstName = fName;
      this.lastName = lName;
    }

    @Override
    public String toString()
    {
      return this.firstName + " " + this.lastName;
    }

    public static void main (String[] args)
    {
      g_OverrideToStringMethod name = new g_OverrideToStringMethod("Aditya", "Ekka");

      System.out.println(name.toString());
    }
   
}
