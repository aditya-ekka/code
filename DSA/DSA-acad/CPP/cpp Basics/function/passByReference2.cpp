#include <iostream>
using namespace std;
void swap(int* p,int* q){ //int* data type
    cout<<"swaped"<<endl;
    int temp=*q;
    *q=*p;
    *p=temp;
    cout<<&p<<" "<<&q<<endl;
    cout<<p<<" "<<q<<endl;
    cout<<*p<<" "<<*q<<endl;
}
int main(){
    int x,y;
    x=4,y=5;
    swap(&x,&y); //pass the adress
    cout<<x<<" "<<y<<endl;
}