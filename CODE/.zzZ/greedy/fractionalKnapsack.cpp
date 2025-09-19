#include<iostream>
using namespace std;
int fknapsack(int items,int arr[],int capacity){
    int value=0;
    int w=0;
    //sort array
    int i=0; //if sorted max to min
    while(w+arr[i]<capacity){
        value+=arr[i]*arr[i+1];
    }
}
int main(){
    int items,capacity;
    cin>>capacity;
    cin>>items;
    int arr[2*items]; //prefer vector pair
    for(int i=0;i<2*items;i++){
        cin>>arr[i];
    } //store value and weight
    cout<<fknapsack(items,arr,capacity)<<endl;
}