#define fr(i,n) for(int i=0;i<n;i++)
#define fR(i,n) for(int i=n-1;i>=0;i--)
#define frr(i,n) for(int i=1;i<=n;i++)
#define fRR(i,n) for(int i=n;i>=1;i--)
#define ll long long
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define r0 return 0;
#define r1 return 1;
#define printv(_v) fr(i,_v.size()){cout<<_v[i]<<" ";}
#define printvv(_v) fr(i,_v.size()){fr(j,_v[1].size()){cout<<_v[i]}}
//Eww...macros!
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int arr[n];
    int count_2=0;
    fr(i,n) {
        cin>>arr[i];
        if(arr[i]==2) count_2 ++;}
    //

    if(count_2%2==0){
        int loop=count_2 / 2;
        fr(i,n){
            if(arr[i]==2){
                loop--;
            }
            if(loop==0){
                cout<<i+1<<endl;
                return;
            }
        }
    }else{
        cout<<-1<<endl;
    }
}

int main(){
    int test;
    cin>>test;
    while(test--){
        solve();
    }
    return 0;
}