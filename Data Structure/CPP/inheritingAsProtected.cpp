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

class derived:protected aii{
    int x;
public:
    void setk(){
        seti(10,12);
        x=a*b;
    }
    void showall(){
        cout<<x<<" ";
        geti();
    }
};

int main(){
    derived ob;
    ob.seti(5,2);
    ob.geti();
    ob.setk();
    ob.showall();
    // cout<<ob.a<<endl;

}