#include <iostream>
using namespace std;
int main(){
    int testcase;
    cin>>testcase;
    for (int x=0;x<testcase;x++){
        int n;
        cin>>n;
        n%4==0? cout<<"Bob\n" : cout<<"Alice\n";
    }

}