#include<iostream>
using namespace std;
struct node
{
    int data;
    node* left;
    node* right;
};
node* createNode(int value){
    node* tmpnode=new node;
    tmpnode->data=value;
    tmpnode->left=nullptr;
    tmpnode->right=NULL;
    return tmpnode;
}
void printTree(node* root){
    node* temp= new node;
    if (temp == NULL) return;
    temp=root;
    if(temp != NULL){
        printTree(temp->left);
        cout<<temp->data<<" ";
        printTree(temp->right);
    //preorder root,left,right
    //inorder left,root,right
    }
}
int main(){
    node* root= createNode(5);
    root->left=createNode(3);
    root->right=createNode(8);
    root->left->left=createNode(0);
    root->left->right=createNode(4);
    root->right->left=createNode(7);
    root->right->right=createNode(9);
    printTree(root);
}
/*
   5
 3   8
0 4  7 9 
*/

/*
LEAF NODE :
LEVEL/HEIGHT : DEPTH
SUBTREE : eg, left subtree & right subtree

build a binary tree #
preorder sequence
*/