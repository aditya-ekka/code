#include<iostream>
using namespace std;

class base{
public:
    base(){
        cout<<"Base constructed\n";
    }
    ~base(){
        cout<<"Base Destructed\n";
    }
};
class drv:public base{
public:
    drv(){
        cout<<"Derived constructed\n";
    }
    ~drv(){
        cout<<"Derived destructed\n";
    }
};

int main(){
    drv object;
    return 0;
}