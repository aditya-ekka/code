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
    ll k,n,q; //k hour ; n task; q queries;
    cin>>n>>k>>q;
    ll task[n][2];
    fr(i,n){
        cin>>task[i][0]>>task[i][1]; //task came at 'a-th' hr, needs 'b' hr
    }
    ll query[q][2];
    fr(i,q){
        cin>>query[i][0]>>query[i][1]; //x-th day ; y-th task
    }
    
    ll sol[n][2];//finishing day, and hour
    //solve
    ll day=0,hour=0;
    fr(i,n){
        hour+=task[i][1];
        while(hour>k){
            
        }
    }

    fr(i,q){
        // ll d,h;
        
    }

    return 0;
}