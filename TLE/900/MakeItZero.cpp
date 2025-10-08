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
    int n;
    cin>>n;
    int arr[n];
    fr(i,n) cin>>arr[i];
    //
    if(n%2==0){
        cout<<2<<endl;
        fr(i,2) cout<<1<<" "<<n<<endl;
    }else{
        int gap=1;
        while(gap<=n){

            //zero at starting
            int xr=arr[0];
            for(int j=1;j<=gap-1;j++){
                xr^=arr[j];
            }
            if(xr==0){
                cout<< 4 << endl;
                    fr(loop,2)  cout<<1<<" "<<gap<<endl;
                    fr(loop,2)  cout<<gap+1<<" "<<n<<endl;
                return;
            }
            //zero at ending
            xr=arr[n-1];
            for(int j=n-2;j>=n-gap;j--){
                xr^=arr[j];
            }
            if(xr==0){
                cout<< 4 << endl;
                fr(loop,2)  cout<<1<<" "<<n-gap<<endl;
                fr(loop,2)  cout<<n-gap+1<<" "<<n<<endl;
                return;
            }
            //zero at middle (stictly middle)
            frr(i,n-gap-1){
                xr=arr[i];
                for(int j=i+1; j<i+gap; j++){
                    xr^=arr[j];
                }
                // i to i+gap-1 => 0
                // i+1 to i+gap >> in 1 based indexing
                if(xr==0){
                    int l,r;
                    if((i+1)%2==0)  l=i+1;
                    else            l=i+2;
                    if((i+gap)%2==)
                    cout<< 6 << endl;
                        fr(loop,2)  cout<<1<<" "<<i<<endl;
                    // if(i+gap+1<n)
                        fr(loop,2)  cout<<i+1<<" "<<i+gap+1<<endl;
                    // if(i+gap+2<n)
                        fr(loop,2)  cout<<i+gap+2<<" "<<n<<endl;
                    return;
                }
            }
        
            gap+=2;
        }
    }
}

int main(){
    int test;
    cin>>test;
    while(test--)   { solve(); }
    return 0;
}