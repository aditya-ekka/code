#define fr(i,n) for(int i=0;i<n;i++)
#define frr(i,n) for(int i=1;i<=n;i+)
#define ll long long
#define yes cout<<"YES\n"
#define no cout<<"No\n"
#define r0 return 0;
#define r1 return 1;
#define printv(_v) fr(i,_v.size()){cout<<_v[i]<<" ";}
#define printvv(_v) fr(i,_v.size()){fr(j,_v[1].size()){cout<<_v[i]}}
//Eww...macros!
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,k,x;
    cin>>n>>k>>x;
    //
    if(x!=1){
        cout<<"YES\n";
        cout<<n<<endl;
        fr(i,n-1) cout<<1<<" ";
        cout<<1<<endl;
        return;
    }else{
        if(n%2==0){
            if(k<2){
                cout<<"NO\n";
            }else{
                cout<<"YES\n";
                cout<<n/2<<endl;
                fr(i,n/2 - 1) cout<<2<<" ";
                cout<<2<<endl;
            }
        }else{
            if(k<3){    
                cout<<"NO\n";
            }else{
                cout<<"YES\n";
                cout<< (n-3)/2 + 1 <<endl;
                fr(i, (n-3)/2 ) cout<<2<<" ";
                cout<<3<<endl;
            }
        }
    }
}

int main(){
    int test;
    cin>>test;
    while(test--){
        solve();
    }
    return 0;
}