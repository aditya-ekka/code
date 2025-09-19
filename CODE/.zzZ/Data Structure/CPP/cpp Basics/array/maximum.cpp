#include <iostream>
using namespace std;
int main(){
    int arr[]={3,1,9,6,8};
    
    int max=arr[0];
    for (int i=0;i<5;i++){
        if(arr[i]>max)
            max=arr[i];
    }

    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"maximum "<<max;
}