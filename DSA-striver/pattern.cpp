#define fr(i,n) for(int i=0;i<n;i++)
#define fR(i,n) for(int i=n-1;i>=0;i--)
#define frr(i,n) for(int i=1;i<=n;i++)
#define fRR(i,n) for(int i=n;i>=1;i--)
#define ll long long
#define yes cout<<"YES\n"
#define no cout<<"No\n"
#define r0 return 0;
#define r1 return 1;
#define printv(_v) fr(i,_v.size()){cout<<_v[i]<<" ";}
#define printvv(_v) fr(i,_v.size()){fr(j,_v[1].size()){cout<<_v[i]}}
//Eww...macros!
#include<bits/stdc++.h>
using namespace std;

void pattern1(int n){
    fr(i,n){
        fr(j,n){
            cout<<"* ";
        }cout<<endl;
    }
}

void pattern2(int n){
    fr(i,n){
        fr(j,i+1){
            cout<<"* ";
        }cout<<endl;
    }
}

void pattern3(int n){
    fr(i,n){
        fr(j,i+1){
            cout<<j+1<<" ";
        }cout<<endl;
    }
}

void pattern4(int n){
    fr(i,n){
        fr(j,i+1){
            cout<<i+1<<" ";
        }cout<<endl;
    }
}

void pattern5(int n){
    for(int i=n;i>=1;i--){
        fr(j,i){
            cout<<"* ";
        }cout<<endl;
    }
}

void pattern6(int n){
    for(int i=n;i>=0;i--){
        frr(j,i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

void pattern7(int n){
    fr(i,n){
        fr(j,n-i-1){
            cout<<" ";
        }
        fr(j,2*i + 1){
            cout<<"*";
        }
        cout<<endl;        
    }
}

void pattern8(int n){
    fr(i,n){
        fr(j,i){
            cout<<" ";
        }
        fr(j,(2*(n-i)-1)){
            cout<<"*";
        }cout<<endl;
    }
}

void pattern9(int n){
    pattern7(n);
    pattern8(n);
}

void pattern10(int n){
    fr(i,n){
        fr(j,i+1){
            cout<<"*";
        }cout<<endl;
    }
    for(int i=n-2;i>=0;i--){
        fr(j,i+1){
            cout<<"*";
        }cout<<endl;
    }
}

void pattern11(int n){
    bool flag=true;
    fr(i,n){
        fr(j,i+1){
            flag ? cout<<1<<" " : cout<<0<<" ";
            flag=1-flag;
        }cout<<endl;
    }
}

void pattern12(int n){
    fr(i,n){
        // pattern4(n);
        fr(j,i+1){
            cout<<j+1<<" ";
        }
        //
        fr(j,n-i-1){
            cout<<"    ";
        }
        fRR(j,i+1)
            cout<<j<<" ";
        cout<<endl;
    }
}

void pattern13(int n){
    int count=1;
    fr(i,n){
        fr(j,i+1){
            cout<<count<<" ";
            count++;
        }cout<<endl;
    }
}

void pattern14(int n){
    fr(i,n){
        fr(j,i+1){
            cout<<(char)(j+65)<<" ";
        }cout<<endl;
    }
}

void pattern15(int n){
    for(int i=n;i>=0;i--){
        frr(j,i){
            cout<<char(j+64)<<" ";
        }
        cout<<endl;
    }
}

void pattern16(int n){
    fr(i,n){
        fr(j,i+1){
            cout<<char(i+65)<<" ";
        }cout<<endl;
    }
}

void pattern17(int n){
    fr(i,n){
        fr(j,n-i-1){
            cout<<" ";
        }
        fr(j,i + 1){
            cout<<char(j+65);
        }
        fR(j,i){
            cout<<char(j+65);
        }
        cout<<endl;        
    }
}

void pattern18(int n){
    fRR(i,n){
        for(int j=i;j<=n;j++){
            cout<<char(64+j)<<" ";
        }cout<<endl;
    }
}

void pattern19(int n){
    fRR(i,n){
        fr(j,i) cout<<"* ";
        fr(j,(n-i)*2) cout<<"  ";
        fr(j,i) cout<<"* ";
        cout<<endl;
    }
    frr(i,n){
        fr(j,i) cout<<"* ";
        fr(j,(n-i)*2) cout<<"  ";
        fr(j,i) cout<<"* ";
        cout<<endl;
    }
}

void pattern20(int n){
    frr(i,n){
        fr(j,i) cout<<"* ";
        fr(j,(n-i)*2) cout<<"  ";
        fr(j,i) cout<<"* ";
        cout<<endl;
    }
    fRR(i,n){
        fr(j,i) cout<<"* ";
        fr(j,(n-i)*2) cout<<"  ";
        fr(j,i) cout<<"* ";
        cout<<endl;
    }
}

void pattern21(int n){
    frr(i,n){
        frr(j,n){
            if(i==1 || i==n || j==1 || j==n){
                cout<<"* ";
            }else{
                cout<<"  ";
            }
        }cout<<endl;
    }
}
int main(){
    pattern1(5);cout<<endl;
    pattern2(5); cout<<endl;
    pattern3(5); cout<<endl;
    pattern4(5); cout<<endl;
    pattern5(5); cout<<endl;
    pattern6(5); cout<<endl;
    pattern7(5); cout<<endl;
    pattern8(5); cout<<endl;
    pattern9(5); cout<<endl;
    pattern10(5); cout<<endl;
    pattern11(5); cout<<endl;
    pattern12(5); cout<<endl;
    pattern13(5); cout<<endl;
    pattern14(5); cout<<endl;
    pattern15(5); cout<<endl;
    pattern16(5); cout<<endl;
    pattern17(5); cout<<endl;
    pattern18(5); cout<<endl;
    pattern19(5); cout<<endl;
    pattern20(5); cout<<endl;
    pattern21(5); cout<<endl;
}