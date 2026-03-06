#include<vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int testcase;
    cin>>testcase;
    for (int x=0;x<testcase;x++){
        int n,j,k;
        cin>>n>>j>>k;
        vector<int>vec;
        for (int i=0;i<n;i++){
            int member;
            cin >> member;
            vec.push_back(member);
        }
  
        int player=vec[j-1];
        sort (vec.begin(),vec.end());

        if (k>1){
             cout<<"YES\n";
        }
        else{
            if(player==vec[n-1])
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }
    }

}