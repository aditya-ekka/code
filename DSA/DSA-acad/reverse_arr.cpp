#include<iostream>
using namespace std;
void reverse_arr(int arr[],int n){
    for(int i=0;i<n/2;i++){
        arr[i]+=arr[n-i-1];
        arr[n-i-1]=arr[i]-arr[n-i-1];
        arr[i]-=arr[n-i-1];
    }

}
int main(){
    int arr[]={2,5,6,9,8};
    int n=5;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    //reverse array using temp variable
    // for(int i=0;i<n/2;i++){
    //     int temp=arr[i];
    //     arr[i]=arr[n-i-1];
    //     arr[n-i-1]=temp;
    // }
    //reverse array without temp variable
    // for(int i=0;i<n/2;i++){
    //     arr[i]+=arr[n-i-1];
    //     arr[n-i-1]=arr[i]-arr[n-i-1];
    //     arr[i]-=arr[n-i-1];
    // }
    //using function
    reverse_arr(arr,n); // pass by reference
    //output
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}