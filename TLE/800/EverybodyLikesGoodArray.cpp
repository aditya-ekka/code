#define fr(i,n) for(int i=0;i<n;i++)
#define fR(i,n) for(int i=n-1;i>=0;i--)
#define frr(i,n) for(int i=1;i<=n;i++)
#define fRR(i,n) for(int i=n;i>=1;i--)
#define ll long long
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define r0 return 0;
#define r1 return 1;
#define printv(_v) fr(i,_v.size()){cout<<_v[i]<<" ";}
#define printvv(_v) fr(i,_v.size()){fr(j,_v[1].size()){cout<<_v[i]}}
//Eww...macros!
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    ll arr[n];
    fr(i,n) cin>>arr[i];
    //
    int cnt=0;
    bool pairity=arr[0]%2; //true for even
    frr(i,n-1){
        if(arr[i]%2 == pairity){
            cnt++;
        }else{
            pairity=1-pairity;
        }
    }
    cout<<cnt<<endl;
}

int main(){
    int test;
    cin>>test;
    while(test--){
        solve();
    }
    return 0;
}