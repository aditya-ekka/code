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
   int a, b, c; 
   cin >> a >> b >> c;

   if ((2*b-c)%a == 0)
   {
      // cout<<1;
      if ( 2*b-c > 0) {
         yes;  return;
      }
   }

   if ((2*b-a)%c == 0)
   {
      // cout<<2;
      if (2*b-a > 0){
         yes; return;
      }
   }

   if (((a+c)/2)%b == 0)
   {
      // cout<<3;
      if ((a+c)%2 == 0){
         yes; return;
      }
   }
   
   no;
//code
   
}

int main(){
   int testcase;   cin>>testcase;
   while(testcase--)   adie();
   return 0;
}