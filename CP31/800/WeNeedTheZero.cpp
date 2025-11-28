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
    
    ll xarr=arr[0];
    frr(i,n-1)  xarr=xarr^arr[i];

    if(n%2==0){
        // xarr^0 = 0    xor(x...)=0
        if(xarr==0){
            cout<<0<<endl; //print anything
        }else{
            cout<<-1<<endl;
        }
    }else{
        // xarr^x = 0    xor(x...)=x
        cout<<xarr<<endl;
    }

}

int main(){
    int test;
    cin>>test;
    while(test--)   { solve(); }
    return 0;
}

// x^x.. even times = 0
// x^x.. odd times = x