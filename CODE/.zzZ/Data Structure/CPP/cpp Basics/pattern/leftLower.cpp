//left-lower triangle of m
#include <iostream>
using namespace std;
int main(){
    int m;
    cin>>m;
    for (int i=m;i>0;i--){
        for (int j=0;j<i;j++)
            cout<<"*";    
    cout<<endl;
    }
}