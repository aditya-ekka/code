#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        //Jagged Swaps
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        //code  //if 1 is at begining all other will get sorted
        if(arr[0]==1) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}