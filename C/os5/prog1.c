// NAME : ADITYA EKKA
// ADM NO : 24JE0586


#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int ar[100];
int n = 100;

int minimumInArray (int start, int end) //1 based indexing input
{
    int m = ar[start-1];
    for(int i=start; i<=end-1; i++){
        if(ar[i]<m){
            m = ar[i];
        }
    }
    return m;
}

void onlyChild()
{
    int pid = fork();
    
    if (pid > 0)
    {
        //parent process
        wait(NULL); // after child exits; parent process is not executing (while it's supposed to) //DOUBT
        printf("# One Child Process -> Parent\n");
        printf("PID %d\tPPID %d\n\n", getpid(), getppid());
    }
    else
    {
        //child process
        int minElement = minimumInArray (1, 100);
        printf("# One Child Process -> Child\n");
        printf("PID %d\tPPID %d\n", getpid(), getppid());
        printf("Minimum element in array is %d\n\n", minElement);
    }
}

void oneChild()
{
    int pid = fork();
    int status;
    
    if (pid == 0)
    {
        //child process
        int minElement = minimumInArray (1, 50);
        printf("# Two processes (parent + child) -> Child\n");
        printf("PID %d\tPPID %d\n\n", getpid(), getppid());
        exit (minElement);
    }
    
    //parent process
    wait(&status);
    printf("# Two processes (parent + child) -> Parent\n");
    printf("PID %d\tPPID %d\n\n", getpid(), getppid());
    
    int child = WEXITSTATUS (status);
    int minElement = minimumInArray (51, 100);
    if(child < minElement ){
        minElement = child;
    }
    
    printf("Minimum element in array is %d\n\n", minElement);
}

void twoChild()
{
    int pid1 = fork();
    int status1;
    
    if (pid1 >0)
    {
        //parent process
        wait(&status1);
        //I let the first child execute first, to ensure proper execution of code; just to provide a direction
        int child1 = WEXITSTATUS(status1);
        
        int pid2 = fork();
        int status2;
        if (pid2 > 0)
        {
            //parent process
            wait (&status2);
            int child2 = WEXITSTATUS (status2);
            printf("# Three processes (parent + 2 child) -> Parent\n");
            printf("PID %d\tPPID %d\n\n", getpid(), getppid());
            int min3 = minimumInArray (67, 100);
            
            if (child1 < min3){
                min3 = child1;
            }
            if (child2 < min3){
                min3 = child2;
            }
            
            printf("Minimum element in array is %d\n\n", min3);
            
        }
        else
        {
            //child 2
            printf("# Three processes (parent + 2 child) -> Child 2\n");
            printf("PID %d\tPPID %d\n\n", getpid(), getppid());
            int min2 = minimumInArray (34, 66);
            exit (min2);
        }
        
    }
    else
    {
        //child 1
        printf("# Three processes (parent + 2 child) -> Child 1\n");
        printf("PID %d\tPPID %d\n\n", getpid(), getppid());
        int min1 = minimumInArray (1, 33);
        exit (min1);
        
    }
}


void initProgram(int userChoice)
{
    if(userChoice == 1){
            onlyChild();
        }else if (userChoice == 2){
            oneChild();
        }else if (userChoice == 3){
            twoChild();
        }else{
            printf("Invalid Input! Select 1, 2 or 3.\n");
        }
}


int main()
{
    for (int i=0; i<n; i++){
        ar[i] = (rand()%255)+1;
    }
    
    int userChoice;
    while (1>0)
    {
        printf("==================================\n");
        printf("Select your choice (1, 2, 3) :::\n");
        printf("1. One child process\n2. Two processes (parent + child)\n3. Three processes (parent + two children)\n");
        printf("Enter your choice : ");
        scanf("%d", &userChoice);
        printf("\n");
        
        initProgram (userChoice);
        
        // sleep (1);
        // To create a proper difference, I had added sleep of 1 second, before taking another loop
    }
}