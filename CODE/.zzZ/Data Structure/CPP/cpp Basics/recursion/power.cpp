#include<iostream>
using namespace std;
int power(int a,int b){
    if(b>0)
        return a*power(a,b-1);
    else
        return 1;
}
int main(){
    //a raised to power b
    cout<<power(3,4);
}

int power(int a,int b){