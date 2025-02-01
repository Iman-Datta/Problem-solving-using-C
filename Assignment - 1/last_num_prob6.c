#include <stdio.h>

int main() {
    int num1, num2, temp;

    printf("\nEnter two numbers again: ");
    scanf("%d %d", &num1, &num2); //85 25

    printf("\nBefore swapping (Without third variable): num1 = %d, num2 = %d\n", num1, num2);
    num1 = num1 + num2; //85 + 25 = 110
    num2 = num1 - num2; //110 - 25 = 85
    num1 = num1 - num2; //110 - 85 = 25
    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
