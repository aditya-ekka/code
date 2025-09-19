#include <iostream>
using namespace std;

int fact(int n){
    int result=1;
    for(int i=n;i>0;i--)
        result*=i;
    return result;
}
int permu(int n,int r){
    return fact(n)/fact(n-r);
}
int main(){
    int n,r;
    cin>>n;
    cin>>r;
    cout<<permu(n,r);
}