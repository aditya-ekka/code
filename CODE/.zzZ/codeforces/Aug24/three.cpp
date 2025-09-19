#include<bits/stdc++.h>
using namespace std;
int NotallZero(long long arr[],int n,int i,int j){
    for (int k=i;k<=j;k++){
        if(arr[k]>0)   return 1;
    }
    return 0;
}
int max(long long arr[],int n,int i,int j){ //index of max
    int index=i;
    int max=arr[i];
        for (int k=i;k<j;k++){
            if(arr[k]>max){
                max=arr[k];
                index=k;
            }
        }
    return index;
}
void reduce(long long arr[],int n,int index,int i,int j,int damage){ //attack on below-maximum
    arr[index]-=damage; //damage initialised to 1
    if(arr[index]<=0 && i<j){
            reduce(arr,n,index+1,index+1,j,damage+1);
    }
}
int attack(long long arr[],int n,int i,int j){
    // if(NotallZero) return 0;
    int maxm=max(arr,n,i,j);
    int attackCount=0;
    if(maxm-i>=arr[maxm]){
        for(int k=maxm-1;k>=maxm-arr[maxm];k--){
                attackCount+=arr[k]-1;
                reduce(arr,n,k,i,j,arr[k]-1);
        }
        attackCount++;
        reduce(arr,n,maxm-arr[maxm],i,j,1);
    }else if(i==maxm){
        attackCount=arr[maxm];
        reduce(arr,n,maxm,i,j,arr[maxm]);
    }else{ //partial death of maximum
        for(int k=i;k<=maxm-i;k++){
            attackCount+=arr[k]-1;
            reduce(arr,n,k,i,j,arr[k]-1);
        }
        attackCount++;
        reduce(arr,n,i,i,j,1);
        attackCount+=arr[maxm];
        reduce(arr,n,maxm,i,j,arr[maxm]);
    }
    return attackCount;
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
        int attackCount=0;
        while(NotallZero(arr,n,0,n-1)){
            int start=-1,end=-1;
            int i,j;
            for(i=0;i<n;i++){
                if(arr[i]>0){
                    start=i;
                    break;
                }
            }
            for(j=i;j<n-1;j++){
                if(arr[j+1]<=0){
                    end=j;
                    break;
                }
            }
            if(end==-1) end=n-1;
            attackCount+=attack(arr,n,start,end);
            //err
            for(int k=0;k<n;k++) cout<<arr[k]<<" ";
        }

        cout<<attackCount<<endl    ;

    }
    return 0;
}