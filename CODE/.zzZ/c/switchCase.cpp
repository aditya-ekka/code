#include<iostream>
using namespace std;
int main(){
    string str;
    int count=0; int conso=0;
    getline(cin,str);
    for(int i=0;i<str.length();i++){
        char x=str[i];
        switch (x){
            case 'a':
                count++;
                break;
            case 'e':
                count++;
                break;
            case 'i':
                count++;
                break;
            case 'o':
                count++;
                break;
            case 'u':
                count++;
                break;
            default:
                conso++;
        }
    }
    cout<<count<<endl;
    cout<<conso<<endl;
}