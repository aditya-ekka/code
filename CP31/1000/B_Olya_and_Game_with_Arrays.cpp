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
   vector < pair <int, vi> > v (n);
   int t;
   h(i,n){
      cin>> v[i].first;
      h(j,v[i].first){
         cin>>t;
         v[i].second.push_back(t);
      }
   }
//code
   h(i,n){
      sort(v[i].second.begin(),v[i].second.end());
   }
   //min element at index 0 (smallest of each array)
   //to be included
   int m = v[0].second [0];
   h(i,n){
      if( v[i].second [0] < m ){
         m = v[i].second [0];
      }
   }

   int a=m;

   //min element at index 1 (second-smallest of each array)
   //to be excluded, and include others
   m = v[0].second [1];
   int m_idx=0;
   h(i,n){
      if( v[i].second [1] < m ){
         m = v[i].second [1];
         m_idx = i;
      }
   }

   h(i,n){
      if(i != m_idx){
         a += v[i].second [1];
      }
   }
   
   //n=1 array
   //duplication at index 0(for min), but different at index 1

   cout<< a <<endl;
}

int main(){
   int testcase;   cin>>testcase;
   while(testcase--)   adie();
   return 0;
}