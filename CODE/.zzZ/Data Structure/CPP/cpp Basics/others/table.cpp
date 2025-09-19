#include <iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Kiska table likhna hai Bro ? ";
    cin>>m>>n;
    for (int j=m;j<=n;j++){
        for (int i=1;i<=10;i++){
            cout<<j<<" x "<<i<<"\t=\t"<<j*i<<endl;
        }cout<<endl;
    }
}