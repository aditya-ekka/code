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
    int n,k;
    cin>>n>>k;
    char changes[k]; int hash[3]={0,0,0};
    fr(i,k){
        cin>>changes[i];

        switch (changes[i]){
        case '0' :
            hash[0]++ ;
            break;
        case '1' :
            hash[1]++ ;
            break;
        case '2' :
            hash[2]++ ;
            break;
        }
    }

    char deck[n];
    fr(i,n){
        deck[i]='+';
    }

    int idx=0;
    fr(i,hash[0]){
        deck[idx++]='-';
    }
    fr(i,hash[2]){
        deck[idx++] = '?';
    }

    int ridx=n-1;
    fr(i,hash[1]){
        deck[ridx--]='-';
    }

    bool merge =true; int copy=ridx;

    fr(i,hash[2]){
        if(deck[ridx] != '?'){
            merge = false;
        }
        if(deck[ridx]=='+'){
            deck[ridx--]='?';
        }
    }

    if(merge){
        fr(i,hash[2]){
            deck[copy--]='-';
        }
    }

    //output
    fr(i,n){
        cout<<deck[i];
    }cout<<endl;

}

int main(){
    int test;
    cin>>test;
    while(test--)   { solve(); }
    return 0;
}