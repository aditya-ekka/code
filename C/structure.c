#include<stdio.h>
#include<string.h>
#include <stdlib.h>

struct student{
   int roll;
   char name[50];
   long long phone;
};

void setme(struct student* s){
   strcpy(s->name, "Akash");
   s->roll = 586;
   s->phone = 987654123;
   printf("%d %s %d\n", s->roll, s->name, s->phone);
}


void set(struct student s){
   strcpy(s.name, "Akash");
   s.roll = 586;
   s.phone = 987654123;
   printf("%d %s %d\n", s.roll, s.name, s.phone);
}

int main(){
   struct student s2[6];

   for(int i = 0; i<6; i++)
   {
      set(s2[i]);
   }
}

/*
   NOTES
   STRUCTURE AND POINTER

- struct gets copy of data, so doesn't changes original data
- in order to change original data, send address in function
- arrays are passed by adress; unlike others
- use strcpy(varname, "data") to copy in string
- to define a string use : char varname[n];
-                          char varname[] = "hello world";
- use dot operator in normal ; structname.varname to access member of a struct
- use -> arrow operator when we have address of the struct strVarAddress->varname
  (*strName).memName === strName->memName
  
*/