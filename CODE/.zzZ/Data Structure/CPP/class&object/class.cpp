#include<bits/stdc++.h>
using namespace std;

class employee
{
    char name[50];
    double wage;
public:
    void putname(char *n);
    void getname(char *n);
    void putwage(double w);
    void getwage();
};

void employee::putname(char *n)
{
    strcpy(name,n);
}

void employee::getname(char *n)
{
    strcpy(n,name);
}

void employee::putwage(double w)
{
    wage=w;
}

void  employee::getwage(/*double w*/)
{
    // w=wage;
    cout<< wage;
}

int main(void)
{
    employee e1;
    char nam[30]="Rudra";
    e1.putname(nam);
    e1.getwage();cout<<endl;
    e1.putwage(80000.00);
    char na[40];
    // cout<<e1.getname()<<endl;
    e1.getname(na);cout<<endl;
    cout<<"Na is.. "<<na<<endl;
    e1.getwage();cout<<endl;
    // e1->getwage();
}