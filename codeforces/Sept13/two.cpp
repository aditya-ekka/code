//Eww...macros!
#define fr(i,nomber) for(int i=0;i<nomber;i++)
#define frr(i,nomberi) for(int i=1;i<=nomber;i++)
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
        ll m,n,x,y;
        cin>>n>>m>>x>>y;
        ll hor[n],ver[m];
        fr(i,n) cin>>hor[i];
        fr(i,m) cin>>ver[i];
        
        //solve(n,arr);
        ll count=0;
        fr(i,n){
            if(hor[i]>y) break;
            count++;
        }
        fr(i,m){
            if(ver[i]>x) break;
            count++;
        }

        cout<<count<<endl;
    }
    return 0;
}