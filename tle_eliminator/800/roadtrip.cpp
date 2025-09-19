#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        //roadtrip O(n) O(n)
        int x,n;
        cin>>n>>x;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        //distance between each fuel station O(n)
        int dist[n+1];
        dist[0]=arr[0];
        for(int i=0;i<n-1;i++) dist[i+1]=arr[i+1]-arr[i];
        dist[n]=2*(x-arr[n-1]);
        //max in dist O(n)
        int maxgap=dist[0];
        for(int i=1;i<=n;i++){
            if(dist[i]>maxgap) maxgap=dist[i];
        }
        //output
        cout<<maxgap<<endl;
    }
    return 0;
}