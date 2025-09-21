#include<iostream>
using namespace std; 

class base{
    int i;
public:
    int j,k;
    void seti(int x){
        i=x;
    }
    int geti(){
        return i;
    }
};

class derived: private base{
public:
    base::j;
    base::seti;
    base::geti;
    int a;
};

int main(){
    derived obj;
    obj.j=29;
    obj.a=30;
    // obj.k=54;
    //obj.i or obj.k is not allowed
    obj.seti(15);
    cout<<obj.geti()<<" "<<obj.j<<" "<<obj.a<<" ";
}