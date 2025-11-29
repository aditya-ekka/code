#include<bits/stdc++.h>
using namespace std;
#define ll  long long
#define yes cout<<"YES\n"
#define no  cout<<"NO\n"
#define hr(i,n) for(ll i=n-1; i>=0; i--)
#define h(i,n)  for(ll i=0; i<=n-1; i++)
#define H(i,n)  for(ll i=1; i<=n; i++)
#define Hr(i,n) for(ll i=n; i>=1; i--)
#define vi  vector<int>
#define vvi vector<vi>
#define vl  vector<ll>
#define vvl vector<vl>
#define pi  pair<int,int>
#define pl  pair<ll,ll>
#define pv(v)  h(i,v.size()) {cout<<v[i]<<" ";} cout<<endl;
#define pvv(v) h(i,v.size()) {h(j,v[i].size()){cout<<v[i][j]<<" ";} cout<<endl;}
#define endl "\n"
//==================================//


void adie(){
    int n;
    cin>>n;
    vi v(n);
    h(i,n) cin>>v[i];
    //

   vi u(n);
   h(i,n){
      if(v[i]>(i+1)){
         u[i]=v[i]-(i+1);
      }else{
         u[i]=i+1-v[i];
      }
   }

   int m=u[0];
   h(i,n){
      if(u[i]>m){
         m=u[i];
      }
   }

   Hr(i,m){
      h(j,n){
         if((v[j]-1)%i != j%i){
            break;
         }
         if(j==n-1){
            cout<<i<<endl;
            return;
         }
      }
   }

}

int main(){
    int testcase;   cin>>testcase;
    while(testcase--)   adie();
    return 0;
}