//Eww...macros!
#define fr(i,nomber) for(int i=0;i<nomber;i++)
#define frr(i,nomberi) for(int i=1;i<=nomber;i++)
#define ll long long
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
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
        char str[10][10];
        fr(i,10){
            fr(j,10){
                cin>>str[i][j];
            }
        }
        ll points=0;
        fr(i,10){
            fr(j,10){
                if(str[i][j]!='.'){
                    int a,b;
                    i<5 ? a=i+1 : a=10-i;
                    j<5 ? b=j+1 : b=10-j;
                    // int x=min(a,b);
                    // int y=max(i,j);
                    points+=(min(a,b));
                }
            }
        }
        cout<<points<<endl;
    }
    return 0;
}