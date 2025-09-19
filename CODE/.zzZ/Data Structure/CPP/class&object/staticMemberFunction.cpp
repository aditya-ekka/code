#include<bits/stdc++.h>
using namespace std;
//STATIC MEMBER FUNCTION
//use for preinitialization of static member variable

class static_type {
    static int i;
public:
    static void init(int x){
        i=x;
    }
    void show(){
        cout<<i<<endl;
    }
};
int static_type::i;

int main(){
    static_type::init(100);
    static_type x;
    x.show();
    // return 0;

    static_type::init(200);
    static_type y;
    x.show();
    y.show();
}