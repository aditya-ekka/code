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

void solve(int n, vi v, string s){
    int a=0;
    bool go=false;
    h(i,n){
        if(s[i]=='1'){
            go=true;
            break;
        }
    }

    if(!(go)){
        cout<<a<<endl;
        return;
    }

    h(i,n/2 +1){
        //continued...
    }
}

void adie(){
    int n;
    cin>>n;
    vi v(n); string s;
    h(i,n) cin>>v[i];
    cin>>s;
    //
    if(s[0]=='1' || s[n-1]=='1'){
        cout<<-1<<endl;
        return;
    }
    solve(n,v,s);
}

int main(){
    int testcase;   cin>>testcase;
    while(testcase--)   adie();
    return 0;
}