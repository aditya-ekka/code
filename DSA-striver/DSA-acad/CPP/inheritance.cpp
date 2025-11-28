#include<bits/stdc++.h>
using namespace std;

class aii{
    int b;
protected:
int a;
    void seti(int i,int j){
        a=i;b=j;
    }
    void geti(){
        cout<<a<<" "<<b<<endl;
    }
};

class derived:public aii{
    int x;
public:
    derived(int k){
        x=k;
    }
    void show(){
        cout<<x<<endl;
    }
    a=a+1;
};

int main(){
    derived ob(3);
    ob.seti(1,2);
    ob.geti();
    ob.show();
    cout<<ob.a<<endl;

}
/*NOTES
*public by default for struct
*private by default for class
-> public
    .public members of base class, becomes public member of derived class
    .base class' private member is inacessible still, not even derived class can access.


*/