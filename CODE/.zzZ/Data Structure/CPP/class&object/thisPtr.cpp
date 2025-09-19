#include<iostream>
using namespace std;
//this POINTER REFERS TO THE CURRENT INSTANCE OF THE OBJECT (non-static member variable only)
//friend fn doesn't have this ptr cz they r not member of class

//member variable can also be represented as..
//this->variable
class pwr{
    double b;
    int e;
    double val;
public:
    pwr(double base,int exp);
    double get_pwr(){
        return this->val;
    }
};
//this is not used for .. this->argument
//eg. this->base is incorrect
pwr::pwr(double base,int exp){
    this->b=base;
    this->e=exp;
    this->val=1;
    if(exp==1) return;
    for(;exp>0;exp--){
        this->val=this->val*this->b;
    }
}

int main(){
    pwr x(3,2), y(2,3);
    cout<<x.get_pwr()<<endl;
    cout<<y.get_pwr()<<endl;
}