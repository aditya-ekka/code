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
// #include<climits>
using namespace std;

void solve(){
    int n;
        cin>>n;
        int pos=INT_MAX;
        int neg=INT_MIN;
        fr(i,n){
            int a; cin>>a;
            a>=0 ? pos=min(a,pos): neg=max(a,neg);
        }

        if(neg==INT_MIN){
            cout<<pos<<endl;
            return;
        }

        neg=(-1)*neg;
        
        if(pos==INT_MAX){
            cout<<neg<<endl;
            return;
        }

        if(pos>=neg){
            cout<<neg<<endl;
        }else{
            cout<<pos<<endl;
        }
}

int main(){
    solve();
}