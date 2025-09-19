#include<iostream>
using namespace std;
class aii{
    int i;
public:
    aii (int j){i=j;} //constructor
    int geti(){
        return i;
    }
};
int main(){
    // aii ob[3]={1,2,3}; //direct initialisation with list
    // aii ob[]={1,2,3};
    // aii ob[]={aii(1),aii(2),aii(3)};
    aii ob[3]={3,4,0};
    for(int i=0;i<3;i++){
        cout<<ob[i].geti()<<" ";
    }
}