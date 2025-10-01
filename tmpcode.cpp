//Eww...macros!
#define fr(i,nomber) for(int i=0;i<nomber;i++)
#define frr(i,nomber) for(int i=1;i<=nomber;i++)
#define ll long long
#define yes cout<<"YES\n"
#define no cout<<"No\n"
#define r0 return 0;
#define r1 return 1;
#define printv(vexhtar) fr(vexhtar.size()){cout<<vexhtar[i]<<" ";}
#define printvv(vexhtar) fr(i,vexhtar.size(){fr(j,vexhtar[1].size(){cout<<vexhtar[i]})})
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int m,n;
    cin>>m>>n;
    int arr[m];
    arr[0]=1;
    frr(i,m-1){
        int tmp=arr[i-1]+i;
        if(tmp<=n-(m-i-1)){
            arr[i]=tmp;
        }else{
            arr[i]=arr[i-1]+1;
        }
    }
    fr(i,m){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int test;
    cin>>test;
    while(test--){
        solve();
    }
    return 0;
}