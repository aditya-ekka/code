#include <stdio.h>
#include <stdlib.h>

int main()
{
   int* q = malloc ( 4 * sizeof(int));
   q[0] = 11;
   q[1] = 22;
   q[2] = 33;
   q[3] = 44;
   for(int i=0; i<4; i++){
      printf("%d ", q[i]);
   }
}
// q is an Array; not just pointer to a single integer