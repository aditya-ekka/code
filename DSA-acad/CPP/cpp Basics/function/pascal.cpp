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
        for(int j=0;j<=i;j++){
            comb(i,j);cout<<" ";
        }
        cout<<endl;
    }
}
/*
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1
1 5 10 10 5 1
1 6 15 20 15 6 1
each element= iCj (similar to nCr)
*/