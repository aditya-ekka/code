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
   int n; cin >> n;
   map<int,int> mp;
   h(i,n){
      int x;
      cin >> x;
      // pair<int,int> p = {x,0};
      // mp.insert(p);

      if(mp.find(x) == mp.end()){
         mp.insert( pair<int,int> (x,1));
      }else{
         mp[x] ++ ;
      }
   }
//code
//MAP
   int mode = 0;
   for (auto itr = mp.begin(); itr != mp.end(); ++itr){
      if (itr->second > mode) mode = itr->second ;
   }

   // we have n and mode
   int i = 0;
   while (pow(2,i)*mode < n){
      i++ ;
   }
   int cost = i + mode*(pow(2,i)-1); //sum of GP
   cost -= pow(2,i)*mode - n ; //decrementing extra cost that was calculated

   cout<<cost<<endl;

}

int main(){
   int testcase;   cin>>testcase;
   while(testcase--)   adie();
   return 0;
}