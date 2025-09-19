#include<iostream>
using namespace std;
class node{
public:
    int data;
    node* next;
// void addLL();
void printLL();
// void insertAtBegining();
void insertAtEnd(node* head,int data);
// void insertAtMiddle();
};
void node::printLL(){
    node* temp=new node;
    temp=nohead;
    while (temp->next!=nullptr )  
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    
}
void node::insertAtEnd(int data){
    node* temp=new node;
    temp=head;
    while(temp->next != NULL) temp->next;
    node* newnode= new node;
    newnode->data=data;
    newnode->next=nullptr;
    temp->next=newnode;
}
int main(){
    node* head= new node;
    head->next=NULL;
    head->data=5;
    node::insertAtEnd(head,6);
}