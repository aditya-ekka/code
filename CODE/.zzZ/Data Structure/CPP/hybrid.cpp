#include<iostream>
using namespace std;

class base{
public:
    int i;
};

class drv1:virtual public base{ //virtual class
public:
    int j;
};

class drv2:virtual public base{ //virtual class
public:
    int k;
};

class hybrid:public drv1,public drv2{
public:
    int sum;
};

int main(){
    hybrid  ob;
    ob.i=10;
    ob.j=20;
    ob.k=30;
    ob.sum=ob.i+ob.j+ob.k;
    cout<<ob.i<<" ";
    cout<<ob.sum<<endl;
    return 0;
}