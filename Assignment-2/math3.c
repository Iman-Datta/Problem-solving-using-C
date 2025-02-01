//Write a Program to check whether a number is even or odd.

#include<stdio.h>
#include<math.h>

int main() {
    int num;
    printf("Enter your number: \n");
    scanf("%d", &num);
    if (num % 2 == 0) {
        printf("Even number");
    }
    else{
        printf("Odd Number");
    }
    return 0;
}