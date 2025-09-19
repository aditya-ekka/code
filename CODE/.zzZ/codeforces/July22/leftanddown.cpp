#include <iostream>
int coprime(int x,int y){
    int maximum=std::max(x,y);
    for (int i=maximum;i>1;i--){
        if(y%i==0 && x%i==0){
            return coprime(x/i, y/i);
        }
    }
    return maximum;
}
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int z=0;z<n;z++){
        int a,b,k;
        cin>>a>>b>>k;
        if(a<k && b<k){
            cout<<"1"<<endl;
        }else{
            (coprime(a,b)<k)? cout<<"1\n": cout<<"2\n";
        }
    }
}