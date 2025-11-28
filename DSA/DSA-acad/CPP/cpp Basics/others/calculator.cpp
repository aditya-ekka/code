#include <iostream>
using namespace std;
int add(int a, int b){
    return a+b;
}
int sub(int a, int b){
    return a-b;
}
int mult(int a, int b){
    return a*b;
}
int divi (int a, int b){
    if (b==0){
        cout<<"Invalid input : Division by zero is not possible.";
    }else{
        return (a/b)+(a%b);
    }
}

int main(){
    int a,b;
    char sym;
    cout<<"Enter operator + - * % : ";
    cin>>sym;
    cout<<"Enter operands : ";
    cin>>a>>b;
    
    if(sym=='+'){cout<<add(a,b);}
    else if (sym=='-'){cout<<sub(a,b);}
    else if (sym=='*'){cout<<mult(a,b);}
    else if (sym=='%'){cout<<divi(a,b);}
    else {
        cout<<"Invalid Input";
    }
}