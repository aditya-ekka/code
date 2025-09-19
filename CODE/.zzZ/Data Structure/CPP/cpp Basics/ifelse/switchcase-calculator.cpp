#include <iostream>
using namespace std;
int main(){
    char op; int a,b;
    cout<<"Select operator + - * / ";
    cin>>op;
    cout<<"Input two numbers : ";
    cin>>a>>b;
    //switch-case statement
    switch (op){
        case '-' : cout<<a-b; break;
        case '+' : cout<<a+b; break;
        case '*' : cout<<a*b; break;
        case '/' :
            b!=0 ? cout<<a/b : cout<<"Division by Zero ERROR";
            break;
        default:    cout<<"unknown operator";
    }
}