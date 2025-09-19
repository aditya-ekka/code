//product of digits of given number
#include <iostream>
using namespace std;
int main(){
    int n,pro=1;
    cin>>n;
    while(n!=0){
        pro*=n%10;
        n/=10;
    }
    cout<<pro;
}