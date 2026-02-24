#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/wait.h>

void print_info(char *name){
	printf("%s -> PID : %d , PPID : %d\n" , name , getpid() , getppid());
}

int main(){
	pid_t c1,c2;

	c2 = fork();
	if(c2 == 0){
		pid_t c4,c3,c7,c8;
		c3 = fork();
		if(c3 == 0){
		pid_t c5 = fork();
			if(c5 == 0){
			print_info("c5");
			return 0;
			}
		wait(NULL);
		print_info("c3");
		return 0;
		}
		c4 = fork();
		if(c4 == 0){
			pid_t c6 = fork();
			if(c6 == 0){
				print_info("c6");
				return 0;
			}
			wait(NULL);
			print_info("c4");
			return 0;
		}
		wait(NULL);
		wait(NULL);
		c7 = fork();
		if(c7 == 0){
			print_info("c7");
			return 0;
		}
		c8 = fork();
		if(c8 == 0){
			print_info("c8");
			return 0;
		}
		for(int i = 0 ; i<4 ; i++){
			wait(NULL);
		}
		print_info("c2");
		return 0;
	}
	wait(NULL);
	c1 = fork();
	if(c1 == 0){
		print_info("c1");
		return 0;
	}
	wait(NULL);
	wait(NULL);
	print_info("parent process");
	return 0;


}