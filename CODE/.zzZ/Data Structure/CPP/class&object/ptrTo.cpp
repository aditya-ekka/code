#include<iostream>
using namespace std;

class aii{
public:
    int i;
    aii (){i=0;}
    aii (int j){i=j;} 
    int geti(){
        return i;
    }
};

int main(){
    /*
    aii ob(194);
    int* p;
    p=&ob.i;
    cout<<*p<<endl;
    */
    aii ob[]={34,52,58};
    int* p;
    p=&ob[0].i;
    for(int k=0;k<3;k++){
        cout<<*p<<" ";
        p++;
    }
    return 0;
}