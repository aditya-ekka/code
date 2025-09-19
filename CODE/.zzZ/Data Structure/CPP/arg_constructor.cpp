#include<iostream>
using namespace std;

class base{
protected:
    int x;
public:
    base(int i){
        x=i;
        cout<<"Base 1 constructor\n";
    }
    ~base(){
        cout<<"Base 1 destructor\n";
    }
};

class base2{
protected:
    int y;
public:
    base2(int j){
        y=j;
        cout<<"Base 2 costructor\n";
    }
    ~base2(){
        cout<<"Base 2 destructor\n";
    }
};

class drv: public base, public base2{
int z;
public:
    drv(int i,int j,int k):base(i),base2(j){
        z=k;
        cout<<"Derived constructor\n";
    }
    ~drv(){
        cout<<"Derived destructor\n";
    }

    void show(){
        cout<<x<<" "<<y<<" "<<z<<endl;
    }
};

int main(){
    drv object(1,2,3);
    object.show();
}