#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int>vec(2,3);
    // vec.push_back(5);
    vec.pop_back();
    cout<<vec.size()<<endl;
    for(int i=0;i<vec.size();i++)
        cout<<vec[i]<<" ";
}