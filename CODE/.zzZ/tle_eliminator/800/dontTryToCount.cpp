#include<iostream>
using namespace std;
int logtm(int count){
    int n=1;int i=1;
    if(count==0) return 0;
    count ++;
    while(n*2<count){
        n*=2;
        i++;
    }
    return i;
}
int main(){
    int test;
    cin>>test;
    while(test--){
        
        int n,m;
        cin>>n>>m;
        char x[n], s[m];
        for(int i=0;i<n;i++) cin>>x[i];
        for(int i=0;i<m;i++) cin>>s[i];
        //code
        //s(m) inside x(n)..x(n)..x(n)
        int count=0;int flag=0;
        for(int k=0;k<n;k++){
            int i=k;
            for(int j=0;j<m;j++){
                if(s[j]==x[i]){
                    i++;
                    if(i==n) count++;
                    i=i%n;
                    flag++;
                }else{
                    count=0;
                    flag=0;
                    break;     
                }
            }
            if(flag==m){
                break;
            }
        }
        int areWeSame=-1;
        if(m==n){
            areWeSame=1;
            for(int i=0;i<n;i++){
                if(s[i]!=x[i])  areWeSame=0;
            }
        }
        //output
        if(areWeSame==1){
            cout<<0<<endl;
        }else if(flag==m){
            cout<<count<<" "<<logtm(count)<<endl;
        }else{
            cout<<-1<<endl;
        }

    }
    return 0;
}