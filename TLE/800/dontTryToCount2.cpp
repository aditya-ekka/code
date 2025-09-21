#include<iostream>
using namespace std;
int antilog(int words){
    int y=1;int x=1;//y=2^x <=words
    if (words==1) return 0;
    while(y*2<words){
        x++; y*=2;
    }
    return x;
}
int main(){
    int test;
    cin>>test;
    while(test--){

        int n,m;
        cin>>n>>m;
        char x[n],s[m];
        for(int i=0;i<n;i++) cin>>x[i];
        for(int i=0;i<m;i++) cin>>s[i];
        //code
        int flag; int concate;
        for(int k=0;k<n;k++){
            flag=1; concate=0; //concate -1 or 0 err
            int i=k; //i iterates cyclic
            for(int j=0;j<m;j++){
                if(x[i]!=s[j]){
                    flag=0;
                    break;
                }//concate err
                if((i+1)%n==0 && j!=m-1) concate++;
                i=(i+1)%n;
            }
            if(flag==1){
                break;
            }
        }
        if(flag==0){
            cout<<-1<<endl;
        }else{
            cout<<antilog(concate+1)<<endl;//number of words x in after finalisation
        }

    } 
}