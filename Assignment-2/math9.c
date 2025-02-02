// Write a Program to generate all Armstrong numbers within a given range by user
//Hint: 1634. (1^4 + 6^4 + 3^4 + 4^4) = 1634.


#include <stdio.h>

int main() {
    int num, temp, sum = 0, i, fact, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;  

    while (temp > 0) {
        digit = temp % 10;
        fact = 1;

       
        for (i = 1; i <= digit; i++) {
            fact *= i;
        }

        sum += fact;
        temp /= 10;
    }

    if (sum == num)
        printf("%d is a Krishna Murthy number.\n", num);
    else
        printf("%d is not a Krishna Murthy number.\n", num);

    return 0;
}