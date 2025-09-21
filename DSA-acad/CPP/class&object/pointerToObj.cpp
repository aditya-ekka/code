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
    /*
    aii ob(504);
    // aii *ptr;
    // ptr = &ob;
    aii* ptr= &ob;
    cout<<ptr->geti()<<endl;
    */
    aii ob[3]={54,51,84};
    aii* ptr=ob;
    for(int i=0;i<3;i++){
        cout<<ptr->geti()<<" ";
        ptr++; //increment leads to next object
    } 
}