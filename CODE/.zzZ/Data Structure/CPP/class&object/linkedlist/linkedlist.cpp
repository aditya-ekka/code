#include<iostream>
using namespace std;
class node{
public:
    int data;
    node* next;
    node(){
        data=0;
        next=nullptr;
    }
    node(int data){
        this->data=data;
        next=nullptr;
    }
};

class list{
    node* head;
public:
    list(){
        head=NULL;
    }
    void insertHead(int data);
    void print();
    void delList();
    // void insertEnd(int data);
    // void insertMid(int data,int index);
    // int delBegin();
    // int delEnd();
    // int delMid(int index);
};

void list::insertHead(int data){
    node* tmp=new node(data);
    if(this->head==NULL){
        this->head=tmp;
        return;
    }
    tmp->next=this->head;
    this->head=tmp;
}

void list::print(){
    node* tmp= new node;
    if(head==NULL){
        cout<<"Empty List\n";
        return;
    }
    tmp=this->head;
    while(tmp != NULL){
        cout<< tmp->data <<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}

void list::delList(){
    node* tmp;
    tmp=head;
    while(tmp!=NULL){
        head=head->next;
        delete tmp;
        tmp=head;
    }
}

// new & delete?

int main(){
    list l;
    l.insertHead(5);
    l.insertHead(6);
    l.insertHead(25);
    l.print();
}