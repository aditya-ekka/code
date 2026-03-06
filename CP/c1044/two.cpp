#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
 
        int n;
        cin>>n;
        long long arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        //code
        sort(arr,arr+n);
        long long coin=0;
        if(n%2==0){
            for(int i=n-1;i>0;i-=2){
                coin+=arr[i];
            }
        }else{
            for(int i=n-1;i>1;i-=2){
                coin+=arr[i];
            }
        }
        if(n%2==1) coin+= arr[0];
        cout<<coin<<endl;

    }
    return 0;
}