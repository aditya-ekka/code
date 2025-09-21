#include<iostream>
using namespace std;
void merge(int n,int arr[],int i,int mid,int j){
    int ptr1=i;int ptr2=mid+1;
    int ans[j-i];
    for(int k=0;k<=j-i;k++){
        if(ptr1<=mid && ptr2<n){
            if(arr[ptr1]>arr[ptr2]){
                ans[k]=arr[ptr1];
            }else{
                ans[k]=arr[ptr2];
            }
        }
        while(ptr1<=mid){}
    }
}
void mergeSort(int n,int arr[],int i,int j){
    int mid=(i+j)/2;
    if(j>mid){
        mergeSort(n,arr,i,mid);
        mergeSort(n,arr,mid+1,j);
        merge(n,arr,i,mid,j);
    }
}
int main(){
    int arr[]={3,8,1,7,2,4};
    int n=6;
    mergeSort(n,arr,0,n-1);
}