#include<bits/stdc++.h>
using namespace std;
int max(long long arr[],int n,int i,int j){ //index of max
    int index=j;
    long long maxm=arr[j];
    bool allOne=true;
    for(int k=i;k<=j;k++){
        if(arr[k]!=1){
            allOne=false;
            break;
        }
    }
    for (int k=j-1;k>=i;k--){
        if(arr[k]>maxm){
            maxm=arr[k];
            index=k;
        }
    }
    if(allOne) return i;
    return index;
}
int reduce(long long arr[],int n,int i,int j){
    arr[i]--;
    if(i==j){
        if(arr[i]>0)    return i;
        else    return -1;
    }
    if(arr[i]<=0){
        return reduce(arr,n,i+1,j);
    }
    return i;
}
long long attack(long long arr[],int n,int i,int j){
    int maxm=max(arr,n,i,j);
        //     // err inside
        // for(int k=0;k<n;k++) cout<<arr[k]<<" ";
        // cout<<"( "<<i<<" "<<j<<" )"<<maxm<<endl;
        // //err
    if(arr[maxm]==0) return 0;  //base case
    if(i>j) return 0; //err handling
    long long attackCount=0;
    if(i==j){
        attackCount=arr[i];
        arr[i]=0;
        return attackCount; //base case 2
    }else if(i==maxm){
        attackCount=arr[i];
        arr[i]=1;
        int nexti=reduce(arr,n,maxm,j);
        if(nexti !=-1)
            return attackCount + attack(arr,n,nexti,j);
        return attackCount;
    }else if(i+1==maxm){
        attackCount=arr[i];
        arr[i]=0;
        arr[maxm]-=maxm-i-1;
        int nexti=reduce(arr,n,maxm,j);
        if(nexti != -1)
            return attackCount + attack(arr,n,nexti,j);
        return attackCount ;
    }else{  // i < maxm < j
        attackCount=arr[maxm-1];
        arr[maxm-1]=0;
        arr[maxm]-=maxm-i-1;
        int nexti=reduce(arr,n,maxm,j);
        if(nexti != -1)
            return attackCount + attack(arr,n,i,maxm-2) + attack(arr,n,nexti,j);
        return attackCount + attack(arr,n,i,maxm-2);
    }
}
int main(){
    int test;
    cin>>test;
    while(test--){
 
        int n;
        cin>>n;
        long long arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        //code
        cout<<attack(arr,n,0,n-1)<<endl;
        // // err
        //     for(int k=0;k<n;k++) cout<<arr[k]<<" ";
        //     cout<<endl;
        //     //err
    }
    return 0;
}
        
