#include <stdio.h>
#include <stdlib.h>

int N = 5;
struct node
{
   int* ar;
   int top;
};

struct node* stack()
{
   struct node* st = malloc (sizeof(struct node));
   st->top = -1;
   st->ar = malloc (N * sizeof(int));
   return st;
}

bool isEmpty(struct node* st)
{
   return st->top == -1 ? true : false ;
}

bool isFull(struct node* st)
{
   return st->top == N-1 ? true : false ;
}

void push(struct node* st, int num)
{
   if(isFull(st)){
      printf("Stack is Full! Overflow!\n");
      return;
   }

   st->top ++;
   st->ar[st->top] = num;
}

int pop (struct node* st)
{
   if (isEmpty(st)){
      printf("Stack is Empty! Underflow!\n");
      return -1;
   }

   return st->ar [st->top --];
}

void print (struct node* st)
{
   if (isEmpty(st)){
      printf("Stack is Empty! Underflow!\n");
      return;
   }

   for(int i=st->top; i>=0; i--){
      printf("%d ", st->ar [i]);
   }
   printf("\n");
}

int main()
{
   struct node* st = stack();
   // pop(st);
   push(st, 4);
   push(st,6);
   printf("%d \n", (pop(st)));
   push(st,66);
   print(st);
   return 0;
}