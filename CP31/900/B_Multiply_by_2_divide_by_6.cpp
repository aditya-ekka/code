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
//code
   int factor3=0, factor2=0;
   while (n%3 == 0){
      n /= 3;
      factor3 ++;
   }
   while (n%2 == 0){
      n /= 2;
      factor2 ++;
   }

   if (n != 1){
      cout << -1 << endl;
   }else{
      if(factor2 > factor3){
         cout << -1 << endl;
      }else if (factor3 > factor2){
         cout << 2 * factor3 - factor2 << endl;
      }else{
         cout << factor2 << endl;
      }
   }

}

int main(){
   int testcase;   cin>>testcase;
   while(testcase--)   adie();
   return 0;
}