#include <iostream>
using namespace std;
int main(){
    float len,br;
    cin >> len>> br;
    if(len*br > 2*(len+br))
        cout<<"Area is greater than perimeter";
    else if(len*br < 2*(len+br))
        cout<<"Perimeter is greater than area";
    else
        cout<<"Area and Perimeter are equal";
    }