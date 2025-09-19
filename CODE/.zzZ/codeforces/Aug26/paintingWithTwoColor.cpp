#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool solve(ll n,ll a, ll b){
    bool flag1=false,flag2=false;
    for(int x=1;x<a;x++){
        if(x+a-1 == n-x+1){
            flag1=true;
        }
    }
    for(int x=1;x<b;x++){
        if(x+b-1 == n-x+1){
            flag2=true;
        }
    }
    if(b>=n/2 && a>=n/2){
       return 1;
    }else if()
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

/*
bool flag=true;
    if(b>=a){
        for(int i=1;i<=b;i++){
            if((double(i)+(double)(b-1)/2)==(double)(n)/2){
                return 1;
            }
        }
        return 0;
    }else{
        for(int i=1;i<=b;i++){
            if((double(i)+(double)(b-1)/2)==(double)(n)/2){
                flag=false;
            }
        }
        for(int i=1;i<=a;i++){
            if((double(i)+(double)(a-1)/2)==(double)(n)/2){
                flag=false;
            }
        }
    }
    if(flag==true)  return 1;
    else return 0;
*/