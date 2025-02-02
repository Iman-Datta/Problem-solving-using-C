// Write a Program to print the summation of digits of user given input number.

# include<stdio.h>

int main() {
    int num,digit, sum = 0;
    printf("Enter your number: ");
    scanf("%d", &num); //85231

    if (num < 0) {
        num = -num;
    }
    while (num > 0) { 
        digit = num % 10; // 1, 3, 2, 5, 8
        num = num / 10; //8523, 852, 85, 8, 0
        sum = digit + sum;
    }
    printf("%d \n", sum);
    return 0;
}