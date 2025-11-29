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
#define rsortv(v) sort(v.begin(), v.end(), greater(int)
#define endl "\n"
//==================================//

void adie(){
   ll n;
   cin>> n;
//code
   if(n%2 == 1 || n < 4) {
      cout<< -1 <<endl;
      return;
   }
   
   cout<< (n+4)/6 <<" "; //minimum
   cout<< n/4 <<endl; //maximum

}

int main(){
   int testcase;   cin>>testcase;
   while(testcase--)   adie();
   return 0;
}