#include<stdio.h>
int main() {
    int num,a;
    printf("Enter your number: "); //852
    scanf("%d",&num);
    printf("The last digit of your number is: %d \n",num % 10); //2
    printf("Your new modified number is: %d", num / 10); //85
}