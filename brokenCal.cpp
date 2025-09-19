#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int simple_logic(int x,int y){
    int i=x;int count=0;
    while(i<y){
        i*=2;
        count++;
    }
    int j=i/2;
    i-y > y-j ? count+= i-y : count += y-j-1 ;
    return count;
}
int reverse_logic(int x,int y){
    int count=0;
    vector<int>path; 
    path.push_back(y);
    while(y>x){
        if(y%2==1){
            y--; //or y++
            path.push_back(y);
            count++ ;
        }else{
            y/=2;
            path.push_back(y);
            count++;
        }
    }
    count+= x-y;
    //vector reverse printing
    cout<<"path: ";
    for(int i=path.size()-1;i>=0;i--){
        cout<<path[i]<<" ";
    }cout<<endl;
    return count;
    //uncertain wheather to increment or decrement 1, at each intermediate stage
    //fails for where -1 works fine
}
int main(){
    int x,y;
    cin>>x>>y;
    //multiply 2
    //add 1
    //subtract 1 if the number is positive

    //aadhe raste mei bhi plus minus kar sakte hai
    cout<<simple_logic(x,y)<<endl;
    cout<<reverse_logic(x,y)<<endl;
}