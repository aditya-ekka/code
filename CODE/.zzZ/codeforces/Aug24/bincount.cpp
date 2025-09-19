#include<iostream>
#include<vector>
using namespace std;
int main(){
    // vector<vector<int>> arr;
    // for(int i=0;i<42;i++){
    //     int n;
    //     cin>>n;
    //     for(int j=0;j<i;j++){
    //         int a;
    //         cin>>a;
    //         arr[i][j]=a;
    //     }
    // }
    // for(int i=0;i<10;i++)
    //     cout << arr[41][i]<<" ";
    vector<int>output;
    for(int i=0;i<100;i++){
        int temp;
        cin>>temp;
        output.push_back(temp);
    }
    cout<<"42nd element is : "<<output[41];

}