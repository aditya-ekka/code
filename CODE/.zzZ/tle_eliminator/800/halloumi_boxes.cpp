#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        //swaping two element is sufficent condition to solve
        //non decreasing array
        int k,n;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        if(k>1){
            cout<<"YES\n";
        }else{  //k==1
            int flag=1;
            for(int i=0;i<n-1;i++){
                if(arr[i+1]<arr[i]){
                    flag =0;
                    break;
                }
            }
            flag==1 ? cout<<"YES\n" : cout<<"NO\n";
        }

    }
    return 0;
}