#include<stdio.h>
void add(int a,int b){
    printf("Sum of %d and %d is %d",a,b,a+b);
}

int main(){
    int a=3, b=1;
    scanf(a);
    scanf(b);
    add(a,b);
    return 0;
}