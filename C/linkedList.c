#include<stdio.h>
#include<stdlib.h>

struct node
{
   int data;
   struct node* next;
};
 
struct node* createNode (int num)
{
   struct node* head = malloc (sizeof(struct node));
   head->data = num;
   head->next = NULL;
   return head;
}

void insert (struct node* head, int num)
{
   struct node* temp = head;
   while (temp -> next != NULL) {
      temp = temp-> next;
   }

   struct node* newnode = createNode(num);
   temp->next = newnode;
}

void print (struct node* head)
{
   struct node* temp = head;
   while (temp->next != NULL){
      printf("%d ", temp->data);
      temp = temp->next;
   }
   printf("%d\n", temp->data);
}

void insertAtBegin (struct node** head, int num)
{
   struct node* newnode = createNode(num);
   newnode->next = *head;
   *head = newnode;
}

void insertAfter (struct node* head, int index, int num)
{
   //insert at index : index+1
   struct node* temp = head;
   for(int i=0; i<index; i++){
      temp = temp->next;
   }
   struct node* newnode = createNode(num);
   newnode->next = temp->next;
   temp->next = newnode;
}

void insertAt (struct node** head, int index, int num)
{
   if(index ==0)
   {
      insertAtBegin(head, num);
   }
   else
   {
      insertAfter (*head, index -1, num);
   }
}

int main ()
{
   struct node* head = createNode(4);

   insert(head, 5);
   insert(head, 9);
   insert(head, 98);
   insertAtBegin(&head, 54);
   insertAfter(head, 2, 66);
   insert(head, 65);
   insertAt(&head, 4, 111);

   print(head);
   return 0;

}
