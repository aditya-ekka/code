#include<iostream>
using namespace std;
class c1 {
protected:
    int x;
public:
    void showx(){
        cout<<x<<endl;
    }
};

class c2 {
protected:
    int y;
public:
    void showy(){
        cout<<y<<endl;
    }
};

class drv:public c1,public c2 {
public:
    void show(){
        showx();
        showy();
    }
    void setxy(int i,int j){
        x=i;
        y=j;
    }
};

int main(){
    drv object;
    object.setxy(2,3);
    object.showy();
    object.show();
}