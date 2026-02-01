#include<bits/stdc++.h>
using namespace std;

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
//==================================//

void solve(){
    int n;
    cin>>n;
    ll arr[n];
    fr(i,n) cin>>arr[i];
    
    sort(arr,arr+n);
    // sum of other sides > largest side
    while(n>2){
        ll sum=0;
        fr(i,n-1){
            sum += arr[i];
        }
        if(sum > arr[n-1]){
            break;
        }else{
            n--;
        }
    }
    if(n<=2){
        cout<<0<<endl;
        return;
    }

    //seperating couple and single elements
    vector<ll> couple;
    vector<ll> single;
    int in=0;
    for(in; in <= n-2; in++){
        if(arr[in]==arr[in+1]){
            couple.push_back(arr[in]);
            in++;
        }else{
            single.push_back(arr[in]);
        }
    }
    if(in == n-1){
        single.push_back(arr[in]);
    }

    // symmetricity
    if(couple.size() < 1){
        cout<<0<<endl;
        return;
    }else{
        ll p=0;
        fr(i,couple.size()){
            p += (couple[i]*2);
        }
        //couple done, now including singles (sum of other sides < largest side)
        n=single.size(); // (data changes)
        while(n>0){
            ll s=p;
            fr(i,n-1){
                s += single[i];
            }
            if(s > single[n-1]){
                break;
            }else{
                n--;
            }
        }
        //
        if(n>=2){
            p = p + single[n-1] + single[n-2];
        }
        if( n==1){
            p += single[0];
        }

        cout<<p<<endl;
    }
}

int main(){
    int test;
    cin>>test;
    while(test--)   { solve(); }
    return 0;
}