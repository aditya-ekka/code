// name: Aditya Ekka
// adm : 24je0586

#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

struct Node
{
	pid_t pid;
	int bt;
	struct Node* next;	
}

struct Node* addProcess(struct Node** head, int id, int btime)
{
	struct Node* n = malloc(sizeof(struct Node));
	n->pid = id;
	n->bt = btime;
	n->next = *head;
	return n;
}

struct Node* head = NULL;

int main()
{
	int process_count;
	printf("Number of processes : ");
	scanf("%d",&process_count);
	for(int i=0; i<process_count; i++)
	{
		int pid;
		int at;
		int bt;
		printf("Id of the process (integer) : ");
		scanf("%d %d %d", &pid, &at, &bt);
		
		struct Node* temp = head;
		while(){
			temp = temp->next;
		}
		
	}
	
}