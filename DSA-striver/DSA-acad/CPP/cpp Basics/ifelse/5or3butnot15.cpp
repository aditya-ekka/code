#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if (n%5==0 || n%3==0){
        if (n%15!=0)
            cout<<n<<" is not divisible by 15, but by 3 & 5";
        else
            cout<<"No, try somethin' else brother";
    }
    
}