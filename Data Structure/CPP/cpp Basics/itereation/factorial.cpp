#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int result=1;
    for(int i=n;i>0;i--)
        result*=i;
    cout<<result;
}