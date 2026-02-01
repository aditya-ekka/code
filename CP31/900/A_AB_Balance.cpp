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
   string s;
   cin>>s;
//code
   s[s.length()-1] = s[0];
   cout << s << endl;
   /*
   question goes into MAXIMA-MINIMA topic
   if started from a : 
   you'll can only increment ab 
   and once you get ab (i.e, now you got a b) only then you can get ba
   so, you might get multiple ab and ba in between; who cares; the point is maximum steps needed will always be 1
   Then, to (if needed) implemented by equalising first and last index be same
   */
}

int main(){
   int testcase;   cin>>testcase;
   while(testcase--)   adie();
   return 0;
}