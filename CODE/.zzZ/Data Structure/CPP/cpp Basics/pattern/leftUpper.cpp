//left-upper triangle of m
#include <iostream>
using namespace std;
int main(){
    int m;
    cin>>m;
    for (int i=1;i<=m;i++){
        for (int j=0;j<i;j++)
            cout<<"*";    
    cout<<endl;
    }
}