#include <stdio.h>
#include <stdlib.h>

int N=5;

struct queue
{
   int* q; //array
   int rear; //insert here
   int front; //deque from here
   int size;
};

struct queue* createQueue(int n) //n is size of array
{
   struct queue* que = malloc (sizeof(struct queue));
   que->q = malloc(n * sizeof(int));
   que->front = 0;
   que->rear = 0;
   que->size = 0;
   return que;
}

bool isEmpty(struct queue* que)
{
   return que->size == 0 ;
}

bool isFull (struct queue* que)
{
   return que->size == N ;
}

void enqueue(struct queue* que, int num)
{
   if(isFull(que)){
      printf("Queue is Full. Overflow!\n");
      return;
   }

   que->q [que->rear] = num;
   que->rear = (que->rear + 1) % N ;
   que->size ++;
}

int dequeue (struct queue* que)
{
   if(isEmpty(que))
   {
      printf("Queue is Empty. Underflow!");
      return -1;
   }
   int dequeue = que->q [que->front];
   que->front = (que->front + 1) % N ;
   que->size --; 
   return dequeue;
}

void print(struct queue* que)
{
   if(isEmpty(que)){
      printf("Queue is Empty. Underflow!\n");
      return;
   }

   for(int i=0; i<que->size; i++){
      printf("%d ", que->q [que->front + i]);
   }
   printf("\n");
}


int main()
{
   struct queue* q = createQueue(N);
   enqueue(q, 4);
   enqueue(q, 6);
   dequeue(q);
   enqueue(q, 10);
   enqueue(q, 26);
   dequeue(q);
   print(q);

}
/*
   linear queue :
   front = 0
   rear = -1

   circular queue :
   front = rear = 0
   or, use any;
   'cz you need to keep extra track of size
*/
