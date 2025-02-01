#include<stdio.h>
int main() {
    int num1,num2,a,b,c,d,e,f;
    printf("Enter your 1st number: "); //85
    scanf("%d",&num1);
    printf("Enter your 2nd number: "); //34
    scanf("%d",&num2);
    a = num1 / 10; //8 
    b = num1 % 10; //5 last digit of 1st num
    c = num2 / 10; //3
    d = num2 % 10; //4 last digit of 2nd num
    e = (a*10) + d; //84
    f = (c*10) + b; //35
    printf("The both modified number are %d %d \n", e,f);
    printf("The multiplication of new two numbers is: %d \n", e * f);
    return 0;
}