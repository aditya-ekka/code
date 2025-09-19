#include<iostream>
using namespace std;
class node{
    public:
        int data;
        node* left;
        node* right;
    node(){
        this->data=0;
        this->left =NULL;
        this-> right = NULL;
    }
    node(int data){
        this->data=data;
        this->left =NULL;
        this-> right = NULL;
    }
};

node* createNode(int value){
    node* newnode=new node;
    newnode->data=value;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}

int main(){
    node* head=new node(5);
    head->left=new node(2);
    head->right =new node(1);
    head->right=new node(0);

    //printing
    node* temp=new node;
    temp=head;
    while(temp->left != NULL && temp->right != NULL){
        cout<<temp->data<<" ";
        temp=temp->left; cout<<temp->data<<" ";
        temp=temp->right; cout<<temp->data<<" ";
    }
}