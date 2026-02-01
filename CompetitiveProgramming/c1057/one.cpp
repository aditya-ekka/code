#include<bits/stdc++.h>
using namespace std;

#define fr(i,n) for(int i=0;i<n;i++)
#define fR(i,n) for(int i=n-1;i>=0;i--)
#define frr(i,n) for(int i=1;i<=n;i++)
#define fRR(i,n) for(int i=n;i>=1;i--)
#define ll long long
#define yes cout<<"YES\n"

#define r0 return 0;
#define r1 return 1;
#define printv(_v) fr(i,_v.size()){cout<<_v[i]<<" ";}
#define printvv(_v) fr(i,_v.size()){fr(j,_v[1].size()){cout<<_v[i]}}
//==================================//

void solve(){
    int n;
    cin>>n;
    int arr[n];
    fr(i,n) cin>>arr[i];
    //
    sort(arr,arr+n);
    ll count=1;
    frr(i,n-1){
        if(arr[i]>arr[i-1]) count++;
    }
    cout<<count<<endl;
    

}

int main(){
    int test;
    cin>>test;
    while(test--)   { solve(); }
    return 0;
}