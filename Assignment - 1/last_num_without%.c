#include<stdio.h>
int main() {
    int num,a,b;
    printf("Enter your number: "); //852
    scanf("%d",&num);
    a = num / 10; //85
    b = num - (a * 10);
    printf("The last digit of your number is: %d \n",b); //2
    printf("Your new modified number is: %d", a); //85
}