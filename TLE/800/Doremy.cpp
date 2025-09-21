#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        //Doremy's Paint 3
        //array is good if sum of adjacent element equals to k for every pair
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        //code
        //only a exits --YES
        //c exits --NO
        //only a,b exits
        int a=arr[0],b=-1,c=-1;
        int counta=1,countb=0;
        int i;
        for(i=1;i<n;i++){
            if(arr[i]!=a){
                b=arr[i];
                countb++;
                break;
            }else{
                counta++;
            }
        }
        for(i++;i<n;i++){
            if(arr[i]==a) counta ++;
            else if (arr[i]==b) countb ++;
            else{
                c=0;
                break;
            }
        }
        //output
        if(c==0)cout<<"NO\n";
        else if(b==-1) cout<<"YES\n";
        else {
            int diff=counta-countb;
            if(diff==0 || diff==1 || diff==-1){
                cout<<"YES\n";
            }else{
                cout<<"NO\n";
            }
        }
    }
    return 0;
}