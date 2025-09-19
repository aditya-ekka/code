#include <iostream>
using namespace std;
int a=1;
int b=2;
int fib(int n){ // written by me (using external variables)
    // 1 2 3 5 8 13 21 ...
    if (n==1){
        return 1;
    }else{
        b=a+b;
        a=b-a;
        return fib(n-1);
    }
}
int fibb(int n){
    if(n==1 || n==0){
        return 1;
    }else{
        return fibb(n-1)+fibb(n-2);
    }
}
int  main(){
    // int a=1,b=2,c;
    // int n=5; //nth element
    // for(int i=1;i<n;i++){ //n-1 times
    //     b=a+b;
    //     a=b-a;
    // }
    // cout<<n<<"th element is "<<a;
    int n=5;
    fibb(n);
    cout<<n<<"th element is "<<a;
}