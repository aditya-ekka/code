#include <iostream>
using namespace std;
void swap(int a,int b){
    cout<<"hello"<<endl;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<a<<" "<<b<<endl;
}
int main(){
    int x,y;
    x=4,y=5;
    // add(4,3);
    swap(x,y);
    cout<<x<<" "<<y;

}