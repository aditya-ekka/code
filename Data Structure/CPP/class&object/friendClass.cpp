//one class being friend of another class
#include<iostream>
using namespace std;
class twoValues{
    int a,b;
public:
    twoValues(int i,int j){
        a=i;b=j;
    }
    friend class Min;
};

class Min{
    public:
    int min(twoValues x){
        return x.a<x.b ? x.a : x.b ;
    }
};

int main(){
    twoValues tmp(20,46);
    Min m;
    cout<<m.min(tmp)<<endl;
    return 0;
}