// NAME : ADITYA EKKA
// ADMISSION NUMBER : 24JE0586 

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#define SHM_SIZE 1024
#define SHMKEY 697754

int main()
{
    pid_t pid = fork();
    
    if(pid) //parent process
    {
        sleep(1); //wait child proccess until it creates shared memory
        int p_key = SHMKEY;
        int p_shmid = shmget(p_key, SHM_SIZE, 0600 | IPC_CREAT);
        if (p_shmid <= 0)
        {
            perror("shmget");
        }
        printf("PARENT# shmID = %d\n", p_shmid);
        int* p_shm = (int*) shmat (p_shmid, NULL, 0);
        if (p_shm == (int*) -1)
        {
            perror("shmat");
        }
        printf("PARENT# shm address = %p\n", p_shm);
        
        int* p_num = p_shm;
        while (*p_num == -1)
        {
            sleep(1);
        }
        //READING
        printf("Parent process reading : ");
        for (int i=0; i<10; i++)
        {
            printf ("%d, ", *(++p_num));
            //sleep(1); //comment to sped up
        }
        printf("\n");
        
        //MODIFYING
        p_num = p_shm;
        p_num ++ ;
        printf("Parent process modifiying : --- \n");
        int sum = 0;
        for (int i=1; i<=10; i++)
        {
            sum = sum + *p_num;
            *p_num++ = sum % 10 + i;
            //sleep(1); //comment to sped up
        } 
        
        //DISPLAYING AGAIN
        printf("Parent process displaying : ");
        p_num = p_shm;
        p_num ++ ;
        for (int i=1; i<=10; i++)
        {
            printf ("%d, ", *(++p_num));
            //sleep(1); //comment to sped up
        }
        printf("\n");
        
        
        //DEATTACHIING
        int p_deattach = shmdt(p_shm);
        printf("PARENT# shmID = %d\nPARENT DEATTACHING...\n", p_deattach);
        
        *p_shm = 1; //child dies...
        sleep (1);
        
        int k = shmctl (p_key, IPC_RMID, NULL);
        printf("PARENT# shmID (removing memory) = %d\n", k);
        printf("SHARED MEMORY DELETED!\n");
    }
    else    //child process
    {
        int c_key = SHMKEY;
        int c_shmid = shmget(c_key, SHM_SIZE, 0600 | IPC_CREAT);
        if (c_shmid <= 0)
        {
            perror("shmget");
        }
        printf("CHILD# shmID = %d\n", c_shmid);
        int* c_shm = (int*) shmat (c_shmid, NULL, 0);
        if (c_shm == (int*) -1)
        {
            perror("shmat");
        }
        printf("CHILD# shm address = %p\n", c_shm);
        
        //WRITING
        int* c_num = c_shm;
        *c_num++ = -1;
        printf("Child process writing : ");
        for(int i=0; i<10; i++)
        {
            *c_num = rand() % 100 ;
            printf("%d, ", *c_num++);
            //sleep(1); //comment to sped up
        }
        printf("\n");
        
        
        *c_shm = 0;
        while (*c_shm == 0)  //if want to wait until parent executes
        {
            sleep(1);
        }
        
        int c_deattach = shmdt(c_shm);
        printf("CHILD# shmID = %d\nCHILD DEATTACHING...\n", c_deattach);
    }
    
    return 0;
}

/*
    shmget();
    shmat();
    shmdt();
    shmctl();
    we fork(), to create two process, from them we create a shared memory to be accesses, using first index of shared memory as flag or indication to wait by parent or child process wherever needed, next 10 indexes are use to store, read, manipulate (write again),; 
*/