//Eww...macros!
#define fr(n) for(int i=0;i<n;i++)
#define frr(n) for(int i=1;i<=n;i++)
#define ll long long
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define r0 return 0
#define r1 return 1
#include<bits/stdc++.h>
using namespace std;

int solve(int a,int b){
    if(a>b){
            if(a<=2*b+2) r1 ;
            else r0 ;
        }else{
            if(b<=2*a+2) r1 ;
            else r0 ;
        }
}
int main(){
    int test;
    cin>>test;
    while(test--){
    ll a,b,c,d;
        cin>>a>>b>>c>>d;
        //solve(n,arr);
        if(solve(a,b)*solve(c-a,d-b)) yes;
        else no;
        
    }
    return 0;
}