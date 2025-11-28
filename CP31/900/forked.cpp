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
    ll a,b; cin>>a>>b;
    ll kx,ky; cin>>kx>>ky;
    ll qx,qy; cin>>qx>>qy;
    
    vector< pair<ll,ll> > king (8,{kx,ky});
    vector< pair<ll,ll> > queen (8,{qx,qy});

king[0].first +=a; king[0].second +=b;
king[1].first +=a; king[1].second -=b;
king[2].first -=a; king[2].second +=b;
king[3].first -=a; king[3].second -=b;
king[4].first +=b; king[4].second +=a;
king[5].first +=b; king[5].second -=a;
king[6].first -=b; king[6].second +=a;
king[7].first -=b; king[7].second -=a;

queen[0].first +=a; queen[0].second +=b;
queen[1].first +=a; queen[1].second -=b;
queen[2].first -=a; queen[2].second +=b;
queen[3].first -=a; queen[3].second -=b;
queen[4].first +=b; queen[4].second +=a;
queen[5].first +=b; queen[5].second -=a;
queen[6].first -=b; queen[6].second +=a;
queen[7].first -=b; queen[7].second -=a;

   int count=0;

   if(a==b){
        fr(i,4){
            fr(j,4){
                if(king[i].first == queen[j].first &&
                king[i].second == queen[j].second){
                    count ++ ;
                }
            }
        }
   }else{
        fr(i,8){
            fr(j,8){
                if(king[i].first == queen[j].first &&
                king[i].second == queen[j].second){
                    count ++ ;
                }
            }
        }
   }

   cout<<count<<endl;

}

int main(){
    int test;
    cin>>test;
    while(test--){
        solve();
    }
    return 0;
}