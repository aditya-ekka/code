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
   struct employee* newVar = (struct employee*) calloc ( 2, sizeof(struct employee));
   newVar[0].empID = 14;
   newVar[1].empID = 52;

   for(int i = 0; i<4; i++){
      printf("%d\n", newVar[i].empID);
   }

   free(newVar);
   return 0;
}

/*employee
   NOTES
   CALLOC

- struct STRUCTNAME* VARNAME = (struct STRUCTNAME*) calloc ( N, sizeof( struct STRUCTNAME ));
  used to allocate size of pointer at Runtime.
  takes two arguments (not one as malloc)
  
*/