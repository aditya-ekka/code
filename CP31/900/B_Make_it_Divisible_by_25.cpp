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
   int n = s.length();
//code
   int count1=0, count2=0;
   bool c1 = false, c2 = false;
   int i;

   //50 and 00
   for(i=n-1; i>=0; i--){
      if(s[i]=='0'){
         i--;
         break;
      }else{
         count1 ++;
      }
   }
   for(; i>=0; i--){
      if(s[i]=='0' || s[i] == '5'){
         c1 = true;
         break;
      }else{
         count1 ++;
      }
   }

   //25 and 75
   for(i=n-1; i>=0; i--){
      if(s[i]=='5'){
         i--;
         break;
      }else{
         count2 ++;
      }
   }
   for(; i>=0; i--){
      if(s[i]=='2' || s[i] == '7'){
         c2 = true;
         break;
      }else{
         count2 ++;
      }
   }

   int ans = min(count1, count2);
   cout << ans << endl;

}

int main(){
   int testcase;   cin>>testcase;
   while(testcase--)   adie();
   return 0;
}