//Eww...macros!
#define fr(i,nomber) for(int i=0;i<nomber;i++)
#define frr(i,nomberi) for(int i=1;i<=nomber;i++)
#define ll long long
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define r0 return 0;
#define r1 return 1;
#define printv(vexhtar) fr(vexhtar.size()){cout<<vexhtar[i]<<" ";}
#define printvv(vexhtar) fr(i,vexhtar.size(){fr(j,vexhtar[1].size(){cout<<vexhtar[i]})})
#include<bits/stdc++.h>
using namespace std;

void solve(int n, ll arr){
    //
}
int main(){
    int test;
    cin>>test;
    while(test--){
        int n,k;
        cin>>n>>k;
        ll arr[n];
        fr(i,n) cin>>arr[i];
bool y=0;
        fr(i,n){
            if(k==arr[i]){
                yes;y=1;
                break;
            }
        }
        if(y==0){
            no;
        }
        
        //solve(n,arr);
        
    }
    return 0;
}