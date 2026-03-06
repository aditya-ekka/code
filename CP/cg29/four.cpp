//Eww...macros!
#define fr(i,nomber) for(int i=0;i<nomber;i++)
#define frr(i,nomberi) for(int i=1;i<=nomberi;i++)
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
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        ll arr[n];
        fr(i,n) cin>>arr[i];
        sort(arr,arr+n);//increasing
        //solve(n,arr);
        ll count=0,even=0;
        for(int i=n-1;i>=0;i--){
            if(arr[i]%2==1){

                
                count+=arr[i];
                arr[i]=0;
                fr(j,n){
                    if(arr[j]%2==0){
                        count+=arr[j];
                        even++;
                    }
                }

                even=n-even-1; //odd count
                even/=2;
                if(even<=0) break;

                for(int j=i-1;j>=0;j--){
                    if(arr[j]%2==1){
                        if(even--){
                            count+=arr[j];
                        }
                        else{
                            break;
                        }
                    }
                }

                break;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}