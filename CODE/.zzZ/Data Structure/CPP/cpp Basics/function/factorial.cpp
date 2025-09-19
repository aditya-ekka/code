#include <iostream>
using namespace std;
int fact(int n){
    int result=1;
    for(int i=n;i>0;i--)
        result*=i;
    return result;
}
int main(){
    int n;
    cin>>n;
    cout<<fact(n);
}