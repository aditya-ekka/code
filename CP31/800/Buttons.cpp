#define fr(i,n) for(int i=0;i<n;i++)
#define frr(i,n) for(int i=1;i<=n;i+)
#define ll long long
#define yes cout<<"YES\n"
#define no cout<<"No\n"
#define r0 return 0;
#define r1 return 1;
#define printv(_v) fr(i,_v.size()){cout<<_v[i]<<" ";}
#define printvv(_v) fr(i,_v.size()){fr(j,_v[1].size()){cout<<_v[i]}}
//Eww...macros!
#include<bits/stdc++.h>
using namespace std;

void solve(){
    ll a,b,c;
    cin>>a>>b>>c;
    //
    if(c%2==0){ // anna starts
        if(a>b) cout<<"First\n";
        else cout<<"Second\n";
    }else{ // kattie starts
        if(b>a) cout<<"Second\n";
        else cout<<"First\n";
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