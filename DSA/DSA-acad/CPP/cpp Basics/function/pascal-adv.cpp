#include <iostream>
using namespace std;
int fact(int n){
    int result=1;
    for(int i=n;i>0;i--)
        result*=i;
    return result;
}
void comb(int n,int r){
    cout<< fact(n)/((fact(n-r))*(fact(r)));
}
int main(){
    int n; //height
    cin>>n;
    for(int i=0;i<n;i++){
        for(int k=n-i;k>0;k--)
            cout<<" ";
        for(int j=0;j<=i;j++){
            comb(i,j);cout<<" ";
        }
        cout<<endl;
    }
}
//n-i times
/*
   1
  1 1
 1 2 1
1 3 3 1

each element= iCj (similar to nCr)
*/