#include <iostream>
using namespace std; 
int add(int a, int b){
    return a+b;
}
int main(){
    int x,y;
    cin>>x>>y;
    int result=add(x,y);
    cout<<(float)(result);
}