#include<bits/stdc++.h>
using namespace std;
class c2;
class c1{
    int status;
public:
    void set_status(int state);
    friend int idle (c1 a, c2 b);
};
class c2{
    int status;
public:
    void set_status(int state);
    friend int idle (c1 a, c2 b);
};

void c1::set_status(int state){
    status=state;
}
void c2::set_status(int state){
    status=state;
}

int idle(c1 a,c2 b){
    if(a.status || b.status)    return 0;
    else return 1;
}

int main(){
    c1 x; c2 y;
    x.set_status(0);
    y.set_status(0);
    if(idle(x,y)) cout<<"Resource is free\n";
    else cout<<"Resource is in Use\n";
    
    x.set_status(1);
    if(idle(x,y)){
        cout<<"Resource is free\n";
    }else{
        cout<<"Resource is in use\n";
    }

    return 0;
}