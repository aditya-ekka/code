#include<bits/stdc++.h>
using namespace std;

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
//==================================//

void solve(){
    ll x,y,z;
    cin>>x>>y>>z;
    if((x&y) == (y&z)){
        if((x&y) == (x&z)){
            yes;
        }else{
            no;
        }
    }else{
        no;
    }

}

int main(){
    int test;
    cin>>test;
    while(test--)   { solve(); }
    return 0;
}