// NAME : ADITYA EKKA
// ADM NO : 24JE0586

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>

int main ()
{
    int fd1[2]; //file descriptor to be shared among parent and child
    // fd1[0] -> read ; fd1[1] -> write
    int returnFd1 = pipe (fd1);
    
    if (returnFd1 == -1)
    {
        printf ("Error creating pipe 1 (from parent process).\n");
        return 0;
    }
    
    if (fork() > 0)
    {
        close (fd1[0]);
        //PARENT process writes to child process
        printf("\nPARENT :: pid: %d ppid: %d\n", getpid(), getppid());
        char parentWrites[50];
        printf("To be written from the parent process to its child process : ");
        scanf("%s", parentWrites);
        
        write (fd1[1], parentWrites, sizeof(parentWrites));
        wait(NULL);
        close (fd1[1]);
        printf("\nPARENT EXITING\n");
    }
    else
    {
        close (fd1[1]);
        //CHILD process read from
            //1. parent
            //2. grandchild
        printf("\nCHILD :: pid: %d ppid: %d\n", getpid(), getppid());
        char readsFromParent[50];
        read (fd1[0], readsFromParent, sizeof(readsFromParent));
        close (fd1[0]);
        
        char readsFromGrandchild[50];
        int fd2[2]; // file descriptor to be shared among child and grandchild
        int returnFd2 = pipe (fd2);
        
        if (returnFd2 == -1)
        {
            printf ("Error creating pipe 2 (from child process).\n");
            return 0;
        }
        
        if (fork() == 0)
        {
            close (fd2[0]);
            // GRANDCHILD process writes
            printf("\nGRANDCHILD :: pid: %d ppid: %d\n", getpid(), getppid());
            char grandChildWrites[50];
            printf("To be written from the grandchild process to child process : ");
            scanf("%s", grandChildWrites);
            write (fd2[1], grandChildWrites, sizeof(grandChildWrites));
            close (fd2[1]);
            printf("\nGRANDCHILD EXITING\n");
        }
        else
        {
            close (fd2[1]);
            // CHILD process also reads from grandChild
            printf("\nCHILD (after grandchild birth) :: pid: %d ppid: %d\n", getpid(), getppid());
            read (fd2[0], readsFromGrandchild, sizeof(readsFromGrandchild));
            close (fd2[0]);
            
            // piping work is done!
            int len1 = 0, len2 = 0;
            int i = 0;
            while (readsFromParent[i] != '\0')
            {
                i++;
            }
            len1 = i + 1;
            i = 0;
            while (readsFromGrandchild[i] != '\0')
            {
                i++;
            }
            len2 = i + 1;
            int diff = len2 - len1;
            if (diff < 0)
            {
                diff = -1 * diff ;
            }
            printf("Difference between lengths of input strings is : %d\n", diff);
            printf("\nCHILD EXITING\n");
        }
    }
}

/*


PARENT : writes to pipe for child taking user input
  \\
   \\
    \\
    CHILD : reads from parent pipe and grandchild pipe (separate), then outputs result
    //
   //
  //
GRARNDCHILD : writes to pipe for child taking user input


pipeline 1 :: fd1
    parent (writes) & child (reads)
pipeline 2 :: fd2
    grandchild (writes) & child (reads)



*/