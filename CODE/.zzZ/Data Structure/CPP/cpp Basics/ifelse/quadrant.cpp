#include <iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter coordinates (x,y) : ";
    cin>>x>>y;
    if(x>0){
        if(y>0)
            cout<<"First quadrant";
        else if(y<0)
            cout<<"Fourth quadrant";
        else
            cout<<"Number lies on +y-axis";
    }else if(x<0){
        if(y>0)
            cout<<"Second quadrant";
        else if(y<0)
            cout<<"Third quadrant";
        else
            cout<<"Number lies on  - y-axis";
    }else{
        cout<<"Number lies on x-axis";
    }
}