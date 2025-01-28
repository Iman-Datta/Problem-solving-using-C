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
}