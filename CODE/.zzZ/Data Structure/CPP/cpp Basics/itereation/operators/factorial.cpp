//factorial of a given number n
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int factorial=1;
    while (n!=0){
        factorial*=n;
        n-=1;
    }
    cout<<factorial;
}