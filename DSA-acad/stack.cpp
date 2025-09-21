#include <iostream>
using namespace std;
// struct {
//     int arr[5];
//     int top;
// };
class stack
{
private:
    int arr[5];
    int top;
public:
    stack(){top=-1;};
    void push(int n){
        if(top==4){
            cout<<"Stack Overflow\n";
            return;
        }else{
            arr[++top]=n;
        }
    }
    void pop(){
        if(top==-1){
            cout<<"Stack Underflow\n";
            return;
        }else{
            --top;
        }
    }
    int peek(){
        if(top==-1){
            cout<<"Stack is Empty\n";
            return -1;
        }else{
            return arr[top];
        }
    }
    int isEmpty(){
        if(top==-1){
            return 1;
        }else{
            return 0;
        }
    }
    void display(){
        for (int i=top;i>=0;i--){
            cout<<arr[i]<<" ";
        }cout<<endl;
    }
};
int main(){
    stack stack1;
    cout<<stack1.isEmpty()<<endl;
    stack1.pop();
    stack1.push(5);
    stack1.push(4);
    stack1.push(3);
    stack1.push(6);
    stack1.push(1);
    stack1.push(0);
    stack1.display();
    stack1.pop();
    stack1.peek();
    stack1.display();
}

