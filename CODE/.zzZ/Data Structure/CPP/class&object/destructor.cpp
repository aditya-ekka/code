#include<iostream>
using namespace std;
#define SIZE 100
class stack{
    int arr[SIZE];
    int top;
public:
    stack();
    void push(int i);
    int pop();
    ~stack(){
        cout<<"Stack got destructed\n";
    }
};
stack::stack(){
    top=0;
    cout<<"Stack is initialized.\n";
}
void stack::push(int n){
    if(top==SIZE)
        cout<<"Stack is full!\n";
    else{
        arr[top]=n;
        top++;
    }
}
int stack::pop(){
    if(top==0){
        cout<<"Stack Underflow!\n";
        return -1;
    }else{
        top--;
        return arr[top];
    }
}
int main(){
    stack s,ss;
    s.push(1);
    s.push(4);
    ss.push(4);
    ss.push(5);
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<ss.pop()<<endl;
    cout<<ss.pop()<<endl;
}