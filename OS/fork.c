/*
A parent process creates two child processes C1 and C2.
Process C2 further creates four child processes C3, C4, C7, and C8.
Process C3 creates C5, and process C4 creates C6.

The execution order must satisfy the following constraints:
1. C5 and C6 execute first, in any order.
2. After both C5 and C6 complete, processes C3, C4, C7, and C8 execute in any or-
der.
3. Only after C3, C4, C7, and C8 have completed, processes C1 and C2 execute in
any order.
4. The parent process executes last.
Write a C program using fork() and wait() to enforce the above execution order.
For every process created, display its process ID and parent process ID
*/

#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

void print(int id)
{
   printf("C%d\tpid %d\tppid %d\n",id, getpid(), getppid());
}

int main()
{
   pid_t c1, c2, c3, c4, c5, c6, c7, c8;
   
   if((c1=fork()) && (c2=fork()))   //parent process
   {
      //parent ends last
      wait(NULL);
      wait(NULL);
      print(0);
   }
   else  //two child process
   {
      //c1=0 is one child; c1!=0 & c2=0 is another
      if(c1==0) //c1
      {
         wait(NULL);
         print(1);
      }
      else  //c2
      {
         int id1, id2;
         id1 = fork();
         id2 = fork();
         
         if(id1 > 0 && id2 > 0)
         { 
             //c2 continues
             wait(NULL);
             wait(NULL);
             wait(NULL);
             wait(NULL);
             print(2);
         }
         else if (id1 == 0 && id2 == 0) //c3
         {
            if (!fork()) //c5
            {
               wait(NULL);
               print(5);
            }
            else //c3 continues
            {
               print(3);
            }
         }
         else if (id1>0 && id2==0) //c4
         {
            if(!fork()) //c6
            {
               print(6);
            }
            else //c4 continues
            {
               wait(NULL);
               print(4);
            }
         }
         else if (id1 ==0 && id2 >0) //c7
         {
            print(7);
         }
         else //c8
         {
            print(8);
         }
      }
   }
   //parent process

   return 0;
}

/*
process -> 1, 2
c2 -> 3, 4, 7, 8
c3 -> 5; c4 -> 6

order #
5,6
3,4,7,8
1,2
parent
*/

/*
fork() -> parent with child pid
          child with 0

wait(NULL);
parent waits until child finishes

fork() && fork();
P-> 2 child

fork() || fork();
p -> c -> grandchild
*/