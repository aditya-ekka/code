#include <iostream>
using namespace std;
int main(){
    int arr[]={3,1,9,6,8};
    for(int i=0;i<5;i+=2){
        arr[i]+=10;
    }for(int i=1;i<5;i+=2){
        arr[i]*=2;
    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}