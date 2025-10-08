#include<iostream>
#include<string>
using namespace std;
int main(){
    //Vlad begin
    //Dima end
    //b to a
    int test;
    cin>>test;
    while(test--){
        int n,m;
        string a,b,c;
        cin>>n;
        cin>>a;
        cin>>m;
        cin>>b;
        cin>>c;
        for(int i=0;i<m;i++){
            if(c[i]=='D') a=a+b[i];
            else a=b[i]+a;
        }
        cout<<a<<endl;
    }
}