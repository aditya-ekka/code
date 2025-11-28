#include<iostream>
#include<vector>
using namespace std;
void reverse_vec(vector<int> &v){ //using & before vector_name
    for(int i=0;i<v.size()/2;i++){
        v[i]+=v[v.size()-i-1];
        v[v.size()-i-1]=v[i]-v[v.size()-i-1];
        v[i]-=v[v.size()-i-1];
    }
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
    cout<<endl;
}
int main(){
    vector<int>v{3,5,7,9,2};
    cout<<"size "<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
    cout<<endl;
    //reversing code
    // for(int i=0;i<v.size()/2;i++){
    //     v[i]+=v[v.size()-i-1];
    //     v[v.size()-i-1]=v[i]-v[v.size()-i-1];
    //     v[i]-=v[v.size()-i-1];
    // }
    //reverse using function
    reverse_vec(v); //pass by value
    //output
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
    cout<<endl;
}