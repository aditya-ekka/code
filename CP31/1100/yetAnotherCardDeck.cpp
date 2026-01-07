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



int main(){ // brute force : O(n^2)
   int n,q;
   cin>>n>>q;
   vi v(n);
   h(i,n) cin>> v[i];
   
   h(i,q){
      int t;
      cin >> t ;
      int j=0;

      for (j; j<n; j++) {
         if (t == v[j]) {
            cout << j+1 << " " ;
            for (j; j>0; j--){
               v[j] = v[j-1] ;
            }
            v[0] = t;
            break;
         }
      }
   }
   return 0;
}

//passed