#include<iostream>
#include<queue>
using namespace std;

class node{
public:
    int data;
    node* left;
    node* right;
    node(int data){
        this->data=data;
    }
};

static int ptr=-1;
node* buildTree(int arr[]){ //using preorder sequence   O(n)
    ptr++;
    if(arr[ptr]==-1) return nullptr;
    node* root=new node(arr[ptr]);
    // node* root=new node;
    // root->data=arr[ptr];
    root->left=buildTree(arr);
    root->right=buildTree(arr);
    return root;
}

//Preorder traversal    root,left,right
void preorderPrint(node* root){
    if(root==nullptr) return;
    cout<<root->data<<" ";
    preorderPrint(root->left);
    preorderPrint(root->right);
}

//Inorder traversal     left,root,right
void inorderPrint(node* root){
    if(root==nullptr) return;
    inorderPrint(root->left);
    cout<<root->data<<" ";
    inorderPrint(root->right);
}

//Postorder traversal   left,right,root
void postorderPrint(node* root){
    if(root==nullptr) return;
    postorderPrint(root->left);
    postorderPrint(root->right);
    cout<<root->data<<" ";
}

//DFS: preorder, inorder, postorder
//BFS: level order traversal

//Level Order Traversal (tips: queue)   O(n)
void levelorderPrint(node* root){ //without endl
    queue<node*> q;
    q.push(root);
    while(!q.empty()){
        node* current=q.front();
        q.pop();
        cout<<current->data<<" ";
        if(current->left != nullptr)
            q.push(current->left);
        if(current->right !=nullptr)
            q.push(current->right);
    }
}

void levelorder(node* root){ //with endl
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* curr=q.front();
        q.pop();
       
        if(curr==NULL){
            if(!q.empty()){
                q.push(NULL);
                cout<<endl;
            }
        }else{
            cout<<curr->data<<" ";
            if(curr->left != nullptr)
                q.push(curr->left);
            if(curr->right !=nullptr)
                q.push(curr->right);
        }

    }
}

int main(){
    int arr[]={1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    node* root=buildTree(arr);
    // cout<<"root "<<root->data<<endl;
    // cout<<"left "<< root->left->data<<endl;
    // cout<<"right "<<root->right->data<<endl;
    // // cout<<ptr<<endl;
    // cout<<"Preorder "; preorderPrint(root); cout<<endl;
    // cout<<"Inorder "; inorderPrint(root); cout<<endl;
    // cout<<"Postorder "; postorderPrint(root); cout<<endl;
    // levelorderPrint(root); cout<<endl;
    levelorder(root); cout<<endl;

}
/*
       1
    2     3
        (4 5)
*/