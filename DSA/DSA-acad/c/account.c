#include<stdio.h>
#include<string.h>

struct account
{
    int accnum;
    char accname[50];
    float balance;
};

void createAccount(struct account *acc,char name[], int num, float bal){
    strcpy(acc->accname,name);
    acc->accnum = num;
    acc->balance = bal;
    printf("%s's account has been sucessfully created.\n",name);
}

float balance(struct account* acc){
    printf("Your current account balance is INR %.2f.\n",acc->balance);
    return acc->balance;
}

void deposit(struct account *acc,float amount){
    acc->balance += amount;
    printf("Your account SBINxxxxxx%d has been credited by INR %.2f.\n",acc->accnum%10000,amount);
    balance(acc);
}

float withdrawl(struct account* acc,float amount){
    if(acc->balance > amount){
        acc->balance-=amount;
        printf("Your account SBINxxxxxx%d has debited INR %.2f.\n",acc->accnum%10000,amount);
    }else{
        printf("Balance Insufficient.\n");
    }
    balance;
}

void displayDetails(struct account* acc){
    printf("Account Name : %s\n",acc->accname);
    printf("Account Number : %d\n",acc->accnum);
    printf("Account balance : %.2f\n",acc->balance);
}

int main(){
    struct account Aditya;
    strcpy(Aditya.accname,"Aditya");
    Aditya.accnum=739125;
    Aditya.balance=1109.00;
    struct account Rahul;
    createAccount(&Rahul,"Rahul",123456,10000.00);
    balance(&Rahul);
    deposit(&Rahul,500);
    withdrawl(&Aditya,10000);
    withdrawl(&Aditya,700);
    displayDetails(&Aditya);
    displayDetails(&Rahul);
}