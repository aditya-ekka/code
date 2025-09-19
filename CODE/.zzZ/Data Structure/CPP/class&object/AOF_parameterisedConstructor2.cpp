#include<iostream>
using namespace std;
class aii{
    int a,b;
public:
    aii (int i,int j){a=i;b=j;} //argument >=2
    int geti(){
        return a+b;
    }
};
int main(){
    // aii ob[]={aii(1,2),aii(2,3),aii(3,4)};
    aii ob[3]={{1,2},{2,3},{3,4}};
    // aii ob[]={(1,2),(2,3),(3,4)}; incorrect
    for(int i=0;i<3;i++){
        cout<<ob[i].geti()<<" ";
    }
}