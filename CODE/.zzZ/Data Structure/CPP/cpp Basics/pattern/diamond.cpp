//diamond printing of diagonal width n
#include <iostream>
using namespace std;
int main(){
    int m;
    cin>>m;
    int n=m/2;
    //upper triangle including middle line
    for (int i=1;i<=n;i++){
        for (int j=i;j<n;j++)
            cout<<" ";
        for (int j=1;j<i*2;j++)
            cout<<"*";
        cout<<endl;
    }
    //lower triangle excluding middle line
    for (int i=n-1;i>=1;i--){
        for (int j=i;j<n;j++)
            cout<<" ";
        for (int j=1;j<=i*2-1;j++)
            cout<<"*";
        cout<<endl;
    }
}