//check if a number is prime or composite
#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int a;
    cin>>a;
    bool composite=0; //use bool instead of int
    for(int i=2;i<sqrt(a);i++){ //loop till sqrt(a) only
        if (a%i==0){
            cout<<a<<" is a composite number: "<<i<<"*"<<a/i;
            composite=1;
            break;
        }
    }
    if (a==1) cout<<"Neither prime nor composite.";
    else if (composite==0)
        cout<<a<<" is a prime number.";
    }