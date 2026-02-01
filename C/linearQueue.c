#include <stdio.h>
#include <stdlib.h>

int N=5;

struct queue
{
   int* q; //array
   int rear; //insert here
   int front; //deque from here
};

struct queue* createQueue(int n) //n is size of array
{
   struct queue* que = malloc (sizeof(struct queue));
   que->q = malloc(n * sizeof(int));
   que->front = 0;
   que->rear = -1;
   return que;
}

bool isEmpty(struct queue* que)
{
   return que->rear < que->front;
}

bool isFull (struct queue* que)
{
   return que->rear == N-1 ;
}

void enqueue(struct queue* que, int num)
{
   if(isFull(que)){
      printf("Queue is Full. Overflow!\n");
      return;
   }

   que->rear = (que->rear + 1) % N ;
   que->q [que->rear] = num;
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
   return dequeue;
}

void print(struct queue* que)
{
   if(isEmpty(que)){
      printf("Queue is Empty. Underflow!\n");
      return;
   }

   for(int i=que->front; i<=que->rear; i++){
      printf("%d ", que->q [i]);
   }
   printf("\n");
}


int main()
{
   struct queue* q = createQueue(N);
   enqueue(q, 4);
   enqueue(q, 6);
   dequeue(q);
   // dequeue(q);
   dequeue(q);
   enqueue(q, 10);
   enqueue(q, 26);
   // dequeue(q);
   enqueue(q, 266);
   enqueue(q, 62); //was never inserted!
   print(q);

}
/*
   linear queue :
   front = 0
   rear = -1

   can be based on array or Linked List as well

   * this is based on array
*/
