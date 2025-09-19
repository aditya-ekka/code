#include<iostream>
using namespace std;
class aii{
    int i;
public:
    void seti(int j){i=j;}
    int geti(){
        return i;
    }
};
int main(){
    aii ob[3]; //array of object
    for(int i=0;i<3;i++){
        ob[i].seti(i+1); //ob[0] accesses first obj and so on
    }
    for(int i=0;i<3;i++){
        cout<<ob[i].geti()<<" ";
    }
}