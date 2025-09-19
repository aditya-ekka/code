#include<bits/stdc++.h>
#define ll long long
using namespace std;
int sym(ll n,ll a){
    if(n%2==0){
        for(int i=1;i<=n-a+1;i++){
            if (i+a-1>n/2 && i%2==0) return 1;
        }
        return 0;
    }else{
        for(int i=1;i<=n-a+1;i++){
            if (i+a-1>=n/2 && i%2==1) return 1;
        }
        return 0;
    }
}
int overlap(ll n, ll a, ll b){
    for(int i=1;i<=n-a+1;i++){ //red
        for(int j=1;j<=n-b+1;j++){ //blue
            if((i+a-1>n/2 && i%2==0 && n%2==0) || (i+a-1>n/2 && i%2==0 && n%2==0)) return 1;
        }
    }
}
int solve(ll n,ll a, ll b){
    int red=sym(n,a);
    int blue=sym(n,b); //dominates
    if(blue){
        if(red){
            return 1;
        }else{
            
        }
    }
    return 0;
}
int main(){
    int test;
    cin>>test;
    while(test--){
 
        ll n,a,b;
        cin>>n>>a>>b;
        //code
        int check=solve(n,a,b);
        if(check) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
