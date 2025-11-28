#include<iostream>
#include<cmath>
using namespace std;

int findX(long long n){ // 3^x <= n
    long long x=1; int count=0;
    while(x*3 -1 <n){
         x*=3;
        count++;
    }
    return count;
}
long long power3(int n){
    if(n==0) return 1;
    long long i=1;
    while(n--) i*=3;
    return i;
}

int main(){
    int test;
    cin>>test;
    while(test--){
        
        long long n;
        cin>>n;
        //code
        long long coin=0;
        while(n>0){
            int x=findX(n); //3^x < n
            n-=power3(x);
            if(x>0){
                coin += (9+x) * power3(x-1);
            }else{ //for x==0 or n==1
                coin += 3;
            }
        }
        cout<<coin<<endl;

    }
}