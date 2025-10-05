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

// solution based on odd-even analysis focused
// can also be done focusing on "1" #more suitable
void solve(){
    int n;
    cin>>n;
    ll arr[n];
    fr(i,n) cin>>arr[i];
    //
    vector<int>b; vector<int>c;
    bool odd_only=true, even_only=true, one=false,all_same=true;
    fr(i,n){
        arr[i]%2==0 ? odd_only=false : even_only=false;
        if(arr[i]==1) one=true;
        if(arr[i]!=arr[0]) all_same=false;
    }
    
    sort (arr,arr+n);
    
    if(all_same)
    {
        cout<<-1<<endl;
        return;
    }
    else if (odd_only)
    {
        if(one){
            int tmpindex=0;
            fr(i,n){
                if(arr[i]==1){
                    b.push_back(1);
                    tmpindex++;
                }
                else break;
            }
            for(int i=tmpindex;i<n;i++) c.push_back(arr[i]);
        }else{
            ll tmp=arr[n-1];
            for(int i=n-1;i>=0;i--){
                if(arr[i]==tmp) c.push_back(tmp);
                else b.push_back(arr[i]);
            }
        }
    }
    else if(even_only)
    {
        ll tmp=arr[n-1];
        for(int i=n-1;i>=0;i--){
            if(arr[i]==tmp) c.push_back(tmp);
            else b.push_back(arr[i]);
        }
    }
    else
    {
        fr(i,n){
            arr[i]%2==0 ? c.push_back(arr[i]) : b.push_back(arr[i]);
        }
    }

    std::cout << b.size() << " " << c.size() << endl ;
    fr(i,b.size()) cout<<b[i]<<" "; cout<<endl;
    fr(i,c.size()) cout<<c[i]<<" "; cout<<endl;
}

int main(){
    int test;
    cin>>test;
    while(test--){
        solve();
    }
    return 0;
}