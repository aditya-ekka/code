#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    // if(n%2==0){
    //     cout<<n<<" is even."<<endl;
    // }else{
    //     cout<<n<<" is odd."<<endl;
    // }
    cout<<n;
    (n%2==0)?cout<<" is even":cout<<" is odd";
}