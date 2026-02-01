#include<stdio.h>
#include<stdlib.h>

struct employee
{
   int empID;
   char name[50];
   double salary;
};



int main()
{
   struct employee employees[2];
   employees[0].empID = 4;
   employees[1].empID = 2;

   for(int i = 0; i<2; i++){
      printf("%d\n", employees[i].empID);
   }

   printf("\n");


   struct employee* newVar = (struct employee*) malloc ( 2 * sizeof(struct employee));
   newVar[0].empID = 14;
   newVar[1].empID = 52;

   newVar = realloc (newVar, 2 * sizeof(struct employee));
   for(int i = 0; i<4; i++){
      printf("%d\n", newVar[i].empID);
   }

   free(newVar);
   for(int i = 0; i<4; i++){
      printf("%d\n", newVar[i].empID);
   }

   return 0;
}

/*
   NOTES
   MALLOC(), REALLOC(), and FREE()

- struct STRUCTNAME* VARNAME = (struct STRUCTNAME*) malloc ( N * sizeof( struct STRUCTNAME ));
  used to allocate size of pointer at Runtime.
- struct STRUCTNAME* VAR2  = realloc (VARNAME, M * sizeof(struct STRUCTNAME) );
- free (VAR2);
   to avoid memory leakage

*/