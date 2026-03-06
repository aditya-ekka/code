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
#define pv(v)  h(i,v.size()) {cout<<v[i]<<" ";}
#define pvv(v) h(i,v.size()) {h(j,v[i].size()){cout<<v[i][j]<<" ";} cout<<endl;}
#define endl "\n"
//==================================//

void adie(){
    int n;
    cin>>n;
    
    //
    if(n==1){
      cout<<1<<endl;
      return;
    }
    if(n==2){
       cout<<9<<endl;
       return;
    }
    int a = (n*n*3)-3 + (n*n - n - 1) ;
    a = max (a, (n*n-1) + (n*n -n)*3 - 3 + (n*n - 2*n -1) );
    cout<<a<<endl;
}

int main(){
    int testcase;   cin>>testcase;
    while(testcase--)   adie();
    return 0;
}