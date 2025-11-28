#include<iostream>
using namespace std;
int power(int a,int b){
    if (b>1){
        if(b%2==0){
            int n=power(a,b/2);
            return n*n;
        }else{
            int n=power(a,(b-1)/2);
            return n*n*a;
        }
    }return a;
}
int main(){
    cout<<power(3,4);
}