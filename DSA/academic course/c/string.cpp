#include<iostream>
using namespace std;
int main(){
    string str;
    int v=0;
    string vowel="aeiou";
    getline(cin,str);
    for(int i=0;i<str.length();i++){ 
        for(int j=0;j<5;j++){
            if(str[i]==vowel[j]) v++;
        }
    }
    cout<<"Vowel count : "<<v<<endl<<"Other letters count : "<<str.length()-v<<endl;
}