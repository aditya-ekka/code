#include<bits/stdc++.h>
using namespace std;
#define ll  long long
#define yes cout<<"YES\n"
#define no  cout<<"NO\n"
#define hr(i,n) for(ll i=n-1; i>=0; i--)
#define h(i,n)  for(ll i=0; i<=n-1; i++)
#define H(i,n)  for(ll i=1; i<=n; i++)
#define hi(i,n) for(ll i=n; i>=1; i--)
#define vi  vector<int>
#define vvi vector<vi>
#define vl  vector<ll>
#define vvl vector<vl>
#define pi  pair<int,int>
#define pl  pair<ll,ll>
#define pv(v)  h(i,v.size()) {cout<<v[i]<<" ";}
#define pvv(v) h(i,v.size()) {h(j,v[i].size()){cout<<v[i][j]<<" ";} cout<<endl;}
#define endl "\n"
//==================================//

void adie(){
    int n,q;
    cin>>n>>q;
    vi v(n);
    h(i,n) cin>>v[i];
    //

   vi s(n);
   vi e(n);

   int t=0;
   h(i,n){
      t=(t+v[i])%2;
      s[i]=t;
   }
   t=0;
   hr(i,n){
      t=(t+v[i])%2;
      e[i]=t;
   }

   h(i,q){
      int l,r,k;
      cin>>l>>r>>k;
      int sum = k*(r-l+1) ;
      if (l>=2) sum += s[l-2];
      if (r<n) sum += e[r];
      sum%2 ? yes : no;
   }
}

int main(){
    int testcase;   cin>>testcase;
    while(testcase--)   adie();
    return 0;
}