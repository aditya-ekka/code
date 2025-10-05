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
    vector<ll> iarr;
    fr(i,n) cin>>iarr[i];
    //
    vector<ll>arr(iarr);
    // sort(arr.begin(),arr.end());

    bool good=true;

    ll x,y;
    ll min_gcd=arr[0];
    fr(i,n){
        min_gcd=
    }

    frr(i,n-1){
        ll a,b;
        ll min_gcd=arr[i];
    }

    if(good){
        cout<<"Yes\n";
    }else{
        cout<<"No\n";
    }
}

int main(){
    int test;
    cin>>test;
    while(test--){
        solve();
    }
    return 0;
}