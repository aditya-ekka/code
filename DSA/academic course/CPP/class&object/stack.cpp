#include<iostream>
using namespace std;
#define SIZE 100
class stack{
    int stack[SIZE];
    int top;
public:
    void init();
    void push(int i);
    int pop();
};
void stack::init(){
    top=0;
}
void stack::push(int n){
    if(top==SIZE)
        cout<<"Stack is full!\n";
    else{
        stack[top]=n;
        top++;
    }
}
int stack::pop(){
    if(top==0){
        cout<<"Stack Underflow!\n";
        return -1;
    }else{
        top--;
        return stack[top];
    }
}
int main(){
    stack s,ss;
    s.init();
    ss.init();
    s.push(1);
    s.push(4);
    ss.push(4);
    ss.push(5);
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<ss.pop()<<endl;
    cout<<ss.pop()<<endl;
    // s.top=5; err 'cz top is private
}