//find number of digits in a given number
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int size=0;
    do{
        size++;
        n/=10;
    }while(n!=0);
    cout<<size;
}