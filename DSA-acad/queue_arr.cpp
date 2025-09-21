#include<iostream>
using namespace std;
//using array
class queue{
    int arr[5];
    int front;
    int rear;
    int size;
public:
     queue(){
        front=0;
        rear=-1;
        size=0;
     }
     void enqueue(int n);
     void dequeue();
     int peek();
     int isEmpty();
     void display();
};
void queue::enqueue(int n){
    if (size==5)
    {
        cout<<"Queue overflow\n";
        return;
    }
    rear=(rear+1)%5;
    arr[rear]=n;
    size++;   
}
void queue::dequeue(){
    if (size==0){
        cout<<"Queue is Empty\n";
        return;
    }
    front=(front+1)%5;
    size--;   
}
int queue::peek(){
    if(size==0){
        cout<<"Queue is Empty\n";
        return -1;
    }
    return arr[front];
}
int queue::isEmpty(){
    if(size==0)
        return 1;
    return 0;
}
void queue::display(){
    if(size==0){
        cout<<"Queue is Empty\n";
        return;
    }
    for(int i=0;i<size;i++){
        cout<<arr[front+i]%5<<" ";
    }cout<<endl;
}
int main(){
    queue q;
    cout<<q.isEmpty()<<endl;
    q.dequeue();
    q.enqueue(5);
    q.enqueue(4);
    q.enqueue(3);
    q.enqueue(6);
    q.enqueue(1);
    q.enqueue(0);
    q.display();
    q.dequeue();
    cout<<q.peek()<<endl;
    q.display();
}
