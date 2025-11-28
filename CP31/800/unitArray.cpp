#define fr(i,n) for(int i=0;i<n;i++)
#define fR(i,n) for(int i=n-1;i>=0;i--)
#define frr(i,n) for(int i=1;i<=n;i++)
#define fRR(i,n) for(int i=n;i>=1;i--)
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
    int n;
    cin>>n;
    ll sum=0,pro=1;
    fr(i,n){
        int a;
        cin>>a;
        sum+=a;
        pro*=a;
    }
    //
    if(sum<0){
        sum*=-1;
        sum=(sum+1)/2 ; //no of flips to make sum>=0
        if (sum%2)  pro*=-1;
        if(pro==1){
            cout<<sum<<endl;
        }else{
            cout<<sum+1<<endl;
        }

    }else{
        if(pro==1)  cout<<0<<endl;
        else        cout<<1<<endl;
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