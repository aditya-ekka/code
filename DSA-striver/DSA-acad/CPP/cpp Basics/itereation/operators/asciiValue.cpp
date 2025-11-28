//ASCII value of alphabets
#include<iostream>
using namespace std;
int main(){
    for(char ch='a';ch<='z';ch++)
        cout<<ch<<" "<<int(ch)<<endl;
    for(char ch='A';ch<='Z';ch++)
        cout<<ch<<" "<<int(ch)<<endl;
}