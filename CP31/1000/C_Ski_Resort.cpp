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
#define int long long
//==================================//

void adie(){
   int n, k, q;
   cin>>n>>k>>q;
   vi v(n+1);
   h(i,n) cin>>v[i];
//code
   //to store from'date-till'date can be included!
   int st = -1, end = -2;
   ll ans = 0;
   h(i,n+1){
      if (v[i] <= q && i != n)
      {
         if (st == -1)
         {
            st = i;
            end = i;
         }else{
            end++ ;
         }
         continue;
      }
      int days = end - st + 1;
      if (days >= k )
      {
         // counting number of vacations possible
         // cout << st << "," << end << "; ";
         ans += ((days-k+1)*(days-k+2)) / 2;
      }
      st = -1;
      end = -2;
   }

   cout << ans << endl;
}

int32_t main(){   //to avoid signed integer overflow at testcase 6
   int testcase;   cin>>testcase;
   while(testcase--)   adie();
   return 0;
}