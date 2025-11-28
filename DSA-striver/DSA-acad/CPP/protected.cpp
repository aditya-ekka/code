#include<bits/stdc++.h>
using namespace std;

class aii{
protected:
    int a,b;
public:
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
    void setk(){
        x=a*b;
    }
    void show(){
        cout<<x<<endl;
    }
};

int main(){
    derived ob;
    ob.seti(5,2);
    ob.geti();
    ob.setk();
    ob.show();
    // cout<<ob.a<<endl;

}
/*NOTES
*public by default for struct
*private by default for class
-> public
    .public members of base class, becomes public member of derived class
    .base class' private member is inacessible still, not even derived class can access.
    .protected can be accessed
->private
    .nothing accessible
->protected
    .even public member of base class is not accessible
    

*/