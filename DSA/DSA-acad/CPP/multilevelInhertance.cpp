#include<iostream>
using namespace std;

class gfather{
public:
    void g(){
        cout<<"This is Grandfather\n";
    }
};
class father:public gfather{
public:
    void f(){
        cout<<"This is Father\n";
    }
};
class child:public father{
public:
    void c(){
        cout<<"This is child\n";
    }
};

int main(){
    child bachha;
    bachha.c();
    bachha.g();
    bachha.f();
}