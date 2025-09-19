#include<bits/stdc++.h>
using namespace std;
/*
A FRIEND OF ONE CLASS (b) CAN BE MEMBER FN OF OTHER CLASS (a)
here idle is friend of class 2
and member fn of class 1
*/
class c2;

class c1{
    int status;
public:
    void set_status(int state);
    int idle (c2 b);
};

class c2{
    int status;
public:
    void set_status(int state);
    friend int c1::idle (c2 b);
};

void c1::set_status(int state)
{
    status=state;
}
void c2::set_status(int state)
{
    status=state;
}

int c1::idle(c2 b)
{
    if(status || b.status)    return 0;
    else return 1;
}

int main()
{
    c1 x; c2 y;
    x.set_status(0);
    y.set_status(0);
    if(x.idle(y)) cout<<"Resource is free\n";
    else cout<<"Resource is in Use\n";
    
    x.set_status(1);
    if(x.idle(y)){
        cout<<"Resource is free\n";
    }else{
        cout<<"Resource is in use\n";
    }

    return 0;
}