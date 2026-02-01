#include<iostream>
#include<math.h>
#include<vector>
using namespace std;
int main(){
    //n=x+y
    //y=x*(10^a)
    int test;
    cin>>test;
    while(test--){
        
        long long n;
        cin>>n;
        int size=0;
        long long ncopy=n;
        while(ncopy!=0){
            size++;
            ncopy=ncopy/10;
        }

        int ans=0;
        vector<long long> vec;
        for(int i=1;i<size;i++){
            long long x=pow(10,i);
            x++;
            if(n%x==0){
                ans ++;
                vec.push_back(n/x);
            }
        }
        
        cout<<ans<<endl;
        for(int i=ans-1;i>=0;i--)
            cout<<vec[i]<<" ";
        if(ans!=0) cout<<endl;
    }
}