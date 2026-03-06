#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
 
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        //code
        int a=arr[0];
        int flag =0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(arr[i]==arr[j] && i!=j)
                    flag=1;
            }  
        }
        if(flag==1) cout<<"YES\n";
        else cout<<"NO\n";

    }
    return 0;
}