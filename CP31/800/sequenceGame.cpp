#define fr(i,n) for(int i=0;i<n;i++)
#define frr(i,n) for(int i=1;i<=n;i+)
#define ll long long
#define yes cout<<"YES\n"
#define no cout<<"No\n"
#define r0 return 0;
#define r1 return 1;
#define printv(_v) fr(i,_v.size()){cout<<_v[i]<<" ";}
#define printvv(_v) fr(i,_v.size()){fr(j,_v[1].size()){cout<<_v[i]}}
//Eww...macros!
#include<bits/stdc++.h>
using namespace std;

void solve(){
    ll n;
    cin>>n;
    ll arr[n];
    fr(i,n) cin>>arr[i];
    //code
    vector<int>ans;
    fr(i,n-1){
        ans.push_back(arr[i]);
        if (arr[i+1] < arr[i]){
            ans.push_back(arr[i+1]);
        }else if (arr[i+1] == arr[i]){
            //do nothing?
        }else{
            //do nothing#define fr(i,n) for(int i=0;i<n;i++)
#define frr(i,n) for(int i=1;i<=n;i+)
#define ll long long
#define yes cout<<"YES\n"
#define no cout<<"No\n"
#define r0 return 0;
#define r1 return 1;
#define printv(_v) fr(i,_v.size()){cout<<_v[i]<<" ";}
#define printvv(_v) fr(i,_v.size()){fr(j,_v[1].size()){cout<<_v[i]}}
//Eww...macros!
#include<bits/stdc++.h>
using namespace std;

void solve(){
    ll n;
    cin>>n;
    ll arr[n];
    fr(i,n) cin>>arr[i];
    //code
    vector<int>ans;
    fr(i,n-1){
        ans.push_back(arr[i]);
        if (arr[i+1] < arr[i]){
            ans.push_back(arr[i+1]);
        }else if (arr[i+1] == arr[i]){
            //do nothing?
        }else{
            //do nothing
        }
    } ans.push_back(arr[n-1]);
    cout<<ans.size()<<endl;
    printv(ans);
}

int main(){
    int test;
    cin>>test;
    while(test--){
        solve();
    }
    return 0;
}
        }
    } ans.push_back(arr[n-1]);
    cout<<ans.size()<<endl;
    printv(ans);
}

int main(){
    int test;
    cin>>test;
    while(test--){
        solve();
    }
    return 0;
}