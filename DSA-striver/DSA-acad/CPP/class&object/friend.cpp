#include<bits/stdc++.h>
using namespace std;
class myclass{
    int a,b;
public:
    void set_ab(int i,int j){
        a=i;b=j;
    };
    friend int sum(myclass x){
        return x.a + x.b ;
    };
};
int main(){
    myclass z;
    z.set_ab(3,4);
    cout<<sum(z);
}