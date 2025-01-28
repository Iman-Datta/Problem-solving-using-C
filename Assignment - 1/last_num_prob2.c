#include<stdio.h>
int main() {
    int num,a,b,c,d,e,f;
    printf("Enter your number: "); //852
    scanf("%d",&num);
    a = num / 10; //85
    b = a / 10; //8 (1st no.)
    c = a % 10; //5 (2nd last mo.)
    d = num % 10; //2 (last no.)
    e = (b*100)+(d*10)+c;
    printf("Your new modified number is: %d", e);
}