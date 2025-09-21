#include<bits/stdc++.h>
using namespace std;
//Eww...macros!
#define fr(i,n) for(int i=0;i<n;i++)
#define frr(i,n) for(int i=1;i<=n;i++)
#define ll long long
#define yes cout<<"YES\n"
#define no cout<<"No\n"
#define r0 return 0;
#define r1 return 1;

void solve(int n, ll arr){
    //
}
int main(){
    int test;
    cin>>test;
    while(test--){
        int x,y,qx,qy,kx,ky;
        cin>>x>>y>>kx>>ky>>qx>>qy;
        
        //solve(n,arr);
        vector<vector<int>>king={{kx+x,ky+y},{kx+x,ky-y},{kx-x,ky+y},{kx-x,ky-y},
    {kx+y,ky+x},{kx+y,ky-x},{kx-y,ky+x},{kx-y,ky-x}};
        vector<vector<int>>queen={{qx+x,qy+y},{qx+x,qy-y},{qx-x,qy+y},{qx-x,qy-y},
    {qx+y,qy+x},{qx+y,ky-x},{qx-y,qy+x},{qx-y,qy-x}};

        // fr(i,4){
        //     string bin=bitset<2>(i).to_string();
        //     if((int)bin[0]){
        //         king[i][0]+=x;
        //         queen[i][0]+=x;
        //     }else{
        //         king[i][0]-=x;
        //         queen[i][0]-=x;
        //     }
        //     if((int)bin[1]){
        //         king[i][1]+=x;
        //         queen[i][1]+=x;
        //     }else{
        //         king[i][1]-=x;
        //         queen[i][1]-=x;
        //     }
        // }
// fr(i,8){fr(j,2){cout<<king[i][j]<<" ";cout<<queen[i][j]<<" ";}cout<<endl;}

        int ans=0;
        fr(i,8){
            fr(j,8){
                if(king[i][0]==queen[j][0] && king[i][1]==queen[j][1]){
                    ans++;
                }
            }
        }
        
        cout<<ans<<endl;
        
    }
    return 0;
}