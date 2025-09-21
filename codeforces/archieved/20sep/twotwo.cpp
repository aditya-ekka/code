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
        
        sort(arr,arr+n);
        sort(cook,cook+n);

        fr(i,n){
            cook[i]=arr[i]*(m-i);
        }

        fr(i,m){
            if(i>n) break;
            cookies+=cook[n-i-1];
        }

        cout<<cookies<<endl;
        
    }
    return 0;
}