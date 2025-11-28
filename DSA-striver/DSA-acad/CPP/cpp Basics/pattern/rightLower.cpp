//right-lower triangle of m
#include <iostream>
using namespace std;
int main(){
    int m;
    cin>>m;
    for (int i=0;i<m;i++){
        for (int j=0;j<i;j++)
            cout<<" ";
        for (int j=i;j<m;j++)
            cout<<"*";
        cout<<endl;
    }
    // for (int i=m;i>0;i--){
    //     for (int j=m;j>i;j--)
    //         cout<<" ";
    //     for (int j=0;j<i;j++)
    //         cout<<"*";    
    // cout<<endl;
    // }
}