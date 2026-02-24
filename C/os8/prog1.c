// NAME : ADITYA EKKA
// ADM NO : 24JE0586

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>

int main()
{
    int fd[2];
    //fd[0] -> read ; fd[1] -> write
    int returnstatus = pipe (fd);
    
    if(returnstatus == -1)
    {
        printf("Error creating pipe.\n");
        return 0;
    }   
    
    if (fork() > 0)
    {
        // wait(NULL);
        close (fd[0]);
        // close (fd[1]);
        //parent process : reads string from user, and writes through pipe
        char toWrite[50];
        printf("user input (for parent process) : ");
        scanf("%s", toWrite);
        write(fd[1], toWrite, sizeof(toWrite));

    }
    else
    {
        close (fd[1]);
        // close (fd[0]);
        //child process : reads from pipe, and displays it
        char toRead[50];
        read (fd[0], toRead, sizeof(toRead));
        printf("Child process read (from pipe) : %s", toRead);
    }
    return 0;
}

/*
NOTE://
    1.  I tried out commenting close() in both parent and child for their respective file descriptors, but the code still executed perfectly. But, I don't completely belive this so I have added close syntaxes to avoid any error (just in case).
    2.  The program doesn't works as instructed in question on closing the pipes before using. The reason being quite obvious, we ain't able to use pipes to communicate then.
    3.  I didn't close any side of the file descripted- keeping both read and write open. We are able to pass message through pipe even in the same process.
    4.  I did try writing multiple times, but it read only the first string - it didn't wait (or even bother at all) about the second write.
    5.  I tried adding wait(NULL) in parent process - to let the child process read without writing anything. And noticiably, the child process never terminated. Time Run Out Error received from the website terminal. 
*/
