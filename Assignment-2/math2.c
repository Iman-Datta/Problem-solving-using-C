//Write a Program to check whether a number is prime or composite.

#include <stdio.h>
#include <math.h>

int main() {
    int num, i, f = 0;  // Initialize 'f' to 0
    printf("Enter your number: \n");
    scanf("%d", &num);

    if (num <= 1) {
        printf("This is not a prime number\n");
    } 
    else {
        for (i = 2; i <= sqrt(num); i++) {  // Use sqrt(num) for efficiency
            if (num % i == 0) {
                f = 1;  // Mark as composite
                break;
            }
        }
        
        if (f == 0) {
            printf("The number is prime\n");
        } else {
            printf("The number is composite\n");
        }
    }
    return 0;
}
