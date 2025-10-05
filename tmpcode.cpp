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
    int n=4;
    ll arr[n]={1261,227821, 143, 4171, 1941};
    //
    sort(arr,arr+n);

    bool good=true;
    frr(idx,n-1){
        ll hcf=arr[0]; 
        frr(i,idx){
            hcf=gcd(hcf,arr[0]);
            cout<<"i "<<i<<"\nhcf "<<hcf<<"\narr[i] "<<arr[i]<<endl; //
        }
        if (hcf > idx+1){
            good=false;
            break;
        }
    }

    if(good){
        cout<<"Yes\n";
    }else{
        cout<<"No\n";
    }
}

int main(){
    int test=1;
    while(test--){
        solve();
    }
    return 0;
}