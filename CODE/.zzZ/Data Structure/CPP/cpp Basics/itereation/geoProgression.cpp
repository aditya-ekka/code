#include <iostream>
using namespace std;
int main(){
    int a,r,n;//first term|ratio|n'th term
    cout<<"Enter first term :";
    cin >>a;
    cout<<"Enter common ratio :";
    cin>>r;
    cout<<"For n terms; Enter n :";
    cin>>n;

    for(int i=0;i<n;i++){
        cout<<a<<" ";
        a*=r;
    }
}