#include <iostream>
using namespace std;
int main(){
    int a,n;  int count=0;
    cin>>a>>n;
    for (int i=a;i<=n;i++){
        int flag=1;
        for (int j=2;j<i;j++){
            if (i%j==0){
                flag=0;
                break;
            }
        }
        if (flag==1){
            // cout<<i<<" ";
            count++;
        }
    }
    cout<<"\nNumber of Prime numbers is "<<count;
}