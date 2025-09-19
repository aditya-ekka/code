#include<iostream>
using namespace std;
//we insert a new element in already-sorted-array at it's correct position
void insertionSort(int arr[],int n){
    for(int i=0;i<n;i++){
        int temp=arr[i];
        for(int j=i;j>=0;j--){
            if (j!=i) arr[j+1]=arr[j];
            if(j==0){
                arr[0]=temp;
                break;
            }
            if(temp>arr[j-1]){
                //shift all ele to its right position and create an empty space for insertion
                arr[j]=temp;
                break;
            }
        }
    }
}
/*  arr does allow to increase arr.size
void insertElement(int arr[],int& n,int key){
    n++; //pass by reference
    for(int j=n-1;j>=0;j--){
        if (j!=n-1) arr[j+1]=arr[j];
        if(j==0){
            arr[0]=key;
            break;
        }
        if(key>arr[j-1]){
            arr[j]=key;
            break;
        }
    }
}
*/
int main(){
    //using array
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int newElement;
    cin>>newElement;
    //code
    insertionSort(arr,n);
    //output
    // insertElement(arr,n,newElement);
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
}