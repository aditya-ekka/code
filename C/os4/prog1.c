//Name - Aditya Ekka
//Adm no- 24je0586

#include <stdio.h>
#include <stdlib.h>

//ROUND ROBIN SCHEDULING STRATEGY

/*
i. input : P_id, At, bT, timeQuantum
ii. turnaround, waitingTime, responseTime
iii. avg. tA, wT, rT
iv. context Switches count
v. note : aT can be same
*/

//array implementation for Queue

//global Variable
static int timeQuant;
int contextSwitch = 0;


typedef struct
{
	int Pid;
	int aT;
	int bT;
	//
	int fT;
	int responseTime;
	int turnAroundTime;
	int waitTime;
	int rem_bT;
	int firstExecTime;
} Process;


typedef struct
{
	int* arr;
	int front, rear, size, capacity;
} Queue;


Queue* createQueue (int capacity)
{
	Queue* q = (Queue*) malloc (sizeof (Queue)) ;
	q->capacity = capacity;
	q->front = 0;
	q->size = 0;
	q->rear = capacity - 1;
	q->arr = (int*) malloc (q->capacity * (sizeof(int)) );
	return q;
}

Queue* enqueue (Queue* q, int item)
{
	q->rear = (q->rear + 1) % q->capacity ;
	q->arr[q->rear] = item;
	q->size ++ ;
}

Queue* dequeue (Queue* q)
{
	int item = q->arr[q->front];
	q->front = (q->front +1) % q->capacity ;
	q->size --;
	return item;
}

int isInQueue (Queue* q, int id)
{
	for (int i=0; i<q->size; i++)
	{
		if (q->arr[(q->front + i) % q->capacity] == id)
			return 1;		
	}
	return 0;
}



int main()
{
//variable declaration
	int n, currentTime=0, completed=0;
	float total_tat=0, total_wt=0, total_rt=0;
	
//user input
	printf("Provide Time Quantum (in ms) : ");
	scanf("%d",&timeQuant);
	
	printf("Enter total no of proccess : ");
	scanf("%d",&n);	
	
	Process p = (Process) malloc (n * sizeof(Process));
	
	printf("Enter PID of processes : ");
	for(int i=0; i<n; i++){
		scanf("%d",&p[i].Pid);
	}
	printf("Enter Arrival Time of processes : ");
	for(int i=0; i<n; i++){
		scanf("%d",&p[i].aT);
	}
	printf("Enter Burst Time of processes : ");
	for(int i=0; i<n; i++){
		scanf("%d",&p[i].bT);
	}
	
//coding

	for(int i=0; i<n; i++){
		p[i].rem_bT = p[i].bT;
		p[i].firstExecTime = -1;
	}
	
	
	Queue* q = createQueue(n);
	int lastIndex = -1;
	
	while (completed < n)
	{
		for(int i=0; i<n; i++)
		{
			if (p[i].aT <= currentTime &&
			    p[i].rem_bT > 0 &&
			    (! isInQueue(q,i)) &&
			    i != lastIndex
			    )
			    enqueue (q,i);
		}
		
		   
		if (lastIndex != -1 &&
		    p[lastIndex].rem_bT > 0
		    )
		    enqueue (q, lastIndex);
		    
		if (q->size == 0)
		   {currentTime++;
		    continue;
		    }
		    
		    
		int i = dequeue(q);
		if (lastIndex != -1 &&
		    lastIndex != i
		    )
		    contextSwitch++;
		    
		if (p[i].firstExecTime = -1)
		   {
		   p[i].firstExecTime = currentTime;
		   p[i].responseTime = p[i].firstExecTime - p[i].aT ;
		   }
		
		
		int exec =  (p[i].rem_bT > timeQuant) ? timeQuant : p[i].rem_bT ;
		p[i].rem_bT -= exec;
		currentTime += exec;
		
		if (rem_bT == 0)
		{
			p[i].fT = currentTime;
			p[i].turnAroundTime = p[i].ft - p[i].aT ;
			p[i].waitTime = p[i].turnAroundTime - p[i].bT ;
			total_tat += p[i].turnAroundTime;
			total_wt += p[i].waitTime;
			total_rt += p[i].responseTime;
			completed ++ ;
			lastIndex = -1;
		} else {
			lastIndex = i;
		}
	}
	
	printf("Pid\t fT\t Turnaround\t WaitTime\t ResponseTime\n");
	for (int i=0); i<n; i++)
		printf("%d\t%d\t%d\t%d\t%d\n", p[i].Pid , p[i].fT, p[i].turnAroundTime, p[i].waitTime, p[i].responseTime);
	
	printf("AVERAGE \nTAT:%.2f \nWT:%.2f \nRT:%.2f", total_tat, total_wt, total_rt);
	
	printf("CONTEXT SWITCHES : %d", contextSwitch);
	
	free(q->arr);
	free(q);
	free(p);
	return 0;
}