#include<iostream>
using namespace std;
class account{
    int accnum;
    float balance;
public:
    void createAcc(int accNo,float initialbalance);
    void deposit(float amount);
    void withdraw(float amount);
    void showDetails();
};
void account::createAcc(int accnum,float balance){
    this->accnum=accnum;
    this->balance=balance;
    cout<<"Account created successfully.\n";
}
void account::deposit(float amount){
    balance +=amount;
    cout<<amount<<" has been deposited to your account.\nTotal account balance is "<<balance<<endl;
}
void account::withdraw(float amount){
    if(amount<=balance){
        balance-=amount;
        cout<<"Debited "<<amount<<" successfully"<<endl;
        cout<<"Total account balance is "<<balance;
    }else{
        cout<<"Insufficient balance!! "<<balance;
    }
}
void account::showDetails(){
    cout<<"account number is "<<accnum<<endl;
    cout<<"account balance is "<<balance<<endl;
}

int main(){
    int anum=333;
    float money=1000;
    createAcc(anum,money);
}