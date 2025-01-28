#include<stdio.h>

int main() {
    float num1,num2,a;

    printf("Enter the 1st number: ");
    scanf("%f", &num1);
    printf("Enter the 2nd number: ");
    scanf("%f", &num2);
    printf("The summation of 1st and 2nd number is: %f \n", num1 + num2);
    printf("The substraction of 1st and 2nd number is: %f \n", num1 - num2);
    printf("The multiplication of 1st and 2nd number is: %f \n", num1 * num2);
    a = num1 / num2;
    printf("The division of 1st and 2nd number is: %f \n", a);
    return 0;
}