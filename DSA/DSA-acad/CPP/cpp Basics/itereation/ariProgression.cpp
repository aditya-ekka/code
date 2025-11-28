#include <iostream>
using namespace std;
int main(){
    int a,b,n;
    cout<<"Enter first two numbers of AP : ";
    cin>>a>>b;
    cout<<"for printing n terms; enter n : ";
    cin>>n;
    
    //method 1
    // for (int i=0;i<n;i++)
    //     cout<<a+i*(b-a)<<" ";

    //method 2
    // for (int i=a;i<(a+(n-1)*(b-a));i+=(b-a))
    //     cout<<i<<" ";

    //method 3
    //update first term
    int d=b-a;
    for (int i=0;i<n;i++){
        cout<<a<<" ";
        a+=d;
    }
}