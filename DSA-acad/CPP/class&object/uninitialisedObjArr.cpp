#include<iostream>
using namespace std;
class aii{
    int i;
public:
    aii (){i=0;}
    aii (int j){i=j;} 
    int geti(){
        return i;
    }
};
int main(){
    
    aii ob[3];
    ob[0],ob[1]=2,3,ob[3]=845;
    for(int i=0;i<5;i++){
        cout<<ob[i].geti()<<" ";
    }
}