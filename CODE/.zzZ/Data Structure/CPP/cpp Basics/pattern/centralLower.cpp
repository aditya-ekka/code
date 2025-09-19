//central-lower triangle
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=n;i>=1;i--){ //reverse central-upper triangle patterns
        for (int j=i+1;j<=n;j++)
            cout<<" ";
        for (int j=1;j<2*i;j++)
            cout<<"*";
        cout<<endl;
    }
}