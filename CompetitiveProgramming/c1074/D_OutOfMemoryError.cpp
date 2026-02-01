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
   int n,m,h;
   cin>>n>>m>>h;
   vi v(n);
   h(i,n) cin>>v[i];

//code
   map <int,int> mp;
   h(i,m){
      int b, c;
      cin>> b >> c;

      b--;
      
      if(mp.find(b) == mp.end()){
         if(v[b] + c > h){
            mp.clear();
         }else{
            mp.insert(make_pair(b,v[b]+c));
         }
      } else {
         if(mp[b] + c > h){
            mp.clear();
         } else {
            mp[b] += c ;
         }
      }
   }

   for(auto itr=mp.begin(); itr!= mp.end(); ++itr){
      int i = itr->first;
      int val = itr->second;
      v[i] = val;
   }

   h(i,n){
      cout<<v[i]<<" ";
   }
   cout<<endl;
   // pv(v);

}

int main(){
   int testcase;   cin>>testcase;
   while(testcase--)   adie();
   return 0;
}