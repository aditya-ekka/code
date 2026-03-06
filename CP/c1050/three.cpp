//Eww...macros!
#define fr(i,nomber) for(int i=0;i<nomber;i++)
#define frr(i,nomberi) for(int i=1;i<=nomberi;i++)
#define ll long long
#define yes cout<<"YES\n"
#define no cout<<"No\n"
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
        ll n,m,count=0;
        cin>>n>>m;
        ll req[n+1],side[n+1];
        req[0]=0;side[0]=0;
        frr(i,n){
            cin>>req[i]>>side[i];
        }
        
        //solve(n,arr);
        for(int i=1;i<=n;i++){
            ll diff=req[i]-req[i-1];
            ll sid=side[i]-side[i-1];
            if(sid==-1) sid=1;
            count+=diff;
            if((diff-sid)%2==1) count--;
            // cout<<sid<<" "<<diff<<endl;
        }
        if(req[n]<m) count+= m-req[n];
        cout<<count<<endl;
    }
    return 0;
}