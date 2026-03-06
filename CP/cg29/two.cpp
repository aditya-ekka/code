//Eww...macros!
#define fr(i,nomber) for(int i=0;i<nomber;i++)
#define ll long long
#include<bits/stdc++.h>
using namespace std;

int main(){
    int test;
    cin>>test;
    while(test--){
        ll n,m;
        cin>>n>>m;
        ll arr[n];
        fr(i,n) cin>>arr[i];
        ll cook[n];
        ll cookies=0;
        fr(i,n){
            cook[i]=arr[i]*m;
        }
        //solve(n,arr);
        fr(i,m){
            // fr(c,n) cout<<cook[c]<<" ";
            // cout<<cookies<<endl;
            int index=0;
            fr(k,n){
                if(cook[k]>cook[index]){
                        index=k;
                }
            }
            if(cook[index]>=0) cookies+=cook[index];
            else break;
            cook[index]=0;
            fr(j,n){
                cook[j]-=arr[j];
            }
        }
        cout<<cookies<<endl;
        
    }
    return 0;
}