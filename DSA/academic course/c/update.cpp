#include<iostream>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    for(int i=0;i<str.length();i+=2)
        str[i]='a';
    cout<<str;
}