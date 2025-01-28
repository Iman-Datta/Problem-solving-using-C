#include<stdio.h>
int main() {
    int num,a,b,c,d;
    printf("Enter your number: "); //852
    scanf("%d",&num);
    a = num / 10; //85
    b = num % 10; //2
    c = b * 2; //4
    d = (a*10) + c;
    printf("Your new modified number is: %d", d);
}