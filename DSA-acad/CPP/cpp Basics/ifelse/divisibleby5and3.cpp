#include <iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    if(num%3==0 && num%5==0)
        cout<<num<<" is divisible by both 5 and 3.";
    else
        cout<<num<<" is not divisible by both 5 and 3.";
}