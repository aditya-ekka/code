#include <iostream>
using namespace std;
int main(){
    int n=4;
    int arr[]={3,1,9,6,8};
    for(int i=0;i<nname
name+1;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    for(int i=0;i<n/2;i++){
        arr[i]+=arr[n-i];
        arr[n-i]=arr[i]-arr[n-i];
        arr[i]-=arr[n-i];
    }

    for(int i=0;i<n+1;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}