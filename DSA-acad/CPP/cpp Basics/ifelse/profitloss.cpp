#include <iostream>
using namespace std;
int main(){
    float buy,sell;
    cin>>buy;
    cin>>sell;
    if (sell>buy){
        cout<<"Profit made of Rs."<<sell-buy<<endl;
    }else if(sell<buy){
        
        cout<<"Loss made of Rs."<<buy-sell<<endl;
    }else{
        cout<<"Neither profit nor any loss made."<<endl;
    }
}