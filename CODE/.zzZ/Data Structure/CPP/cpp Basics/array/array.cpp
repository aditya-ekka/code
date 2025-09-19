#include<iostream>
using namespace std;
void fn(int arr[]){
    cout<<"hello";
}
int main(){
    int arr[3]={2,3,5}; //declaration+initialisation
    int arr2[]={12,63,55};
    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    }
    //memory allocation in array
    //passing array to fn
    fn(arr);
    //array pass by reference hota hai
    
}