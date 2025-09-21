#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of cages : ";
    cin>>n;
    int unlocked=0;
    int cage[n];
    for(int i=0;i<n;i++){
        cage[i]=0;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j%i==0){
                cage[j-1]=1-cage[j-1];
                cage[j-1]==1 ? unlocked++ : unlocked-- ;
            }
        }
    }
    cout<<"Number of unlocked cells is "<<unlocked<<endl;
    cout<<"Unlocked cells index are : ";
    for(int i=0;i<n;i++){
        if (cage[i]==1 )
        {
            cout<<i+1<<" ";
        }
        
    }
}