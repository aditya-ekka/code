#include<iostream>
#include<string>
#include<cstring>
using namespace std;
#define SIZE 100
class myclass{
    int a,b=0;
    string str;
public:
    myclass(int i){
        a=i;
    };
    myclass(string sh){
        str=sh;
        // strcpy(str,sh);
    }
    void show(){
        cout<<b<<" "<<a<<" "<<str<<endl;
    };
};
int main(){
    myclass ob('a');
    ob.show();
    return 0;
}