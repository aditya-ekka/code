#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int l=0;
    int r=0;
    
    int ptr=1; //serving by left
    for(int i=0;i<s.size();i++){
        if(s[i]=='S'){
            ptr? l++ : r++;
        }
        else if(s[i]=='R'){
            ptr=1-ptr;
            ptr ? l++ : r++;
        }
        cout<<ptr<<endl;
    }
    cout<<l<<" "<<r<<endl;

}
