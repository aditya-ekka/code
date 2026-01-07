#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a+b>c && b+c>a && a+c>b)
        cout<<"Yes, It forms a triangle";
    else
        cout<<"Sorry dude! Can't form a triangle.";
}