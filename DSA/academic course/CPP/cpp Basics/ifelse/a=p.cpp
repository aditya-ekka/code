#include <iostream>
using namespace std;
int main(){
    for(int i=0;i<70000;i++){
        for(int j=0;j<=i;j++){
            if (i*j==2*(i+j)) //area=perimeter
                cout<<i<<" "<<j<<endl;
        }
    }
}