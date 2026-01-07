#include<iostream>
#include<string>
using namespace std;
namespace fornumber{
    int add(int a,int b){
    return a+b;
}
}
namespace forstring{
    string add(string a,string b){
    return a+b;
}
}
namespace hauser{
    int cout=0;
}
int main(){
    // auto& cout=cin;
    // auto& << =operator>>;
    int a=4;int b=6;
    string str1="Hello ",str2="World";
    cout<<fornumber::add(a,b)<<endl;
    cout<<forstring::add(str1,str2)<<endl;
    cout<<hauser::cout<<endl;
}