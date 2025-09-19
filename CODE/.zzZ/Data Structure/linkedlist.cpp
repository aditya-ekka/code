#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node* next;
};
void sinsert(Node*& head,int value){
    Node* newnode= new Node;
    newnode->data=value;
    newnode->next=head;
    head=newnode;
}
void einsert(Node*& head, int value){
    Node* newnode=new Node;
    newnode->data=value;
    newnode->next=nullptr;
    
    if(head==nullptr){
        head=newnode;
        return;
    }

    Node* temp= head;
    while(temp->next!=nullptr){
        temp=temp->next;
    }temp->next=newnode;
}
void print(Node* head){
    Node* temp =head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }cout<<endl;
}
int main(){
    Node* one=new Node();
    Node* second=new Node();
    Node* third= new Node();
    Node* fouth=new Node();

    one->data = 100;
    one->next=second;
    second->data=200;
    second->next=third;
    third->data=300;
    third->next =fouth;
    fouth->data=400;
    fouth->next=nullptr;

    sinsert(one,10);
    einsert(one,500);
    print(one);
    return 0;
}
