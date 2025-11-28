#include<bits/stdc++.h>
#include<string>
#include<vector>
using namespace std;
int coverInWater(vector<int> vec){
    for(int i=0;i<vec.size();i++){
        if(vec[i]>=3){
            return 2;
        }
    }
    int answer=0;
    for(int i=0;i<vec.size();i++){
        answer+=vec[i];
    }
    return answer;

}
int main(){
    int test;
    cin>>test;
    while(test--){
        
        int n;
        cin>>n;
        string str;
        cin>>str;
        //code          // . and #
        vector <int> vec={0};
        for(int i=0;i<n;i++){
            if(str[i]=='.'){
                vec[vec.size()-1] ++ ;
            }else{
                vec.push_back(0);
            }
        }
        //
        cout<<coverInWater(vec)<<endl;
        


    }
    return 0;
}