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
#define pv(v)  h(i,v.size()) {cout<<v[i]<<" ";} cout<<endl
#define pvv(v) h(i,v.size()) {h(j,v[i].size()){cout<<v[i][j]<<" ";} cout<<endl;}
#define sortv(v) sort(v.begin(), v.end())
#define rsortv(v) sort(v.begin(), v.end(), greater(int))
#define endl "\n"
//==================================//

void adie(){
   int n;
   cin>>n;
   vi v(n);
   h(i,n) cin>>v[i];
//code
   
   sortv(v);

   int t = v[0];
   int len = 1;
   int tlen = 1;

   h(i,n){
      if(v[i]==t){
         continue;
      }else if (v[i] == t+1){
         t++; tlen++;
      }else{
         if(tlen>len){
            len = tlen;
         }
         tlen = 1;
         t = v[i];
      }
   }

   if(tlen>len){
      len = tlen;
   }

   cout<<len<<endl;

}

int main(){
   int testcase;   cin>>testcase;
   while(testcase--)   adie();
   return 0;
}