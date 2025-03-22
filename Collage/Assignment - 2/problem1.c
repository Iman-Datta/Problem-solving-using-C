//Write a Program to generate all Krishnamurthy numbers within a given range by user.
//Hint: 40585. (4! + 0! + 5! + 8! + 5!) = 40585


#include <stdio.h>

int main() {
    int lower, upper;
    
    // Get range from the user
    printf("Enter the lower bound: ");
    scanf("%d", &lower);
    printf("Enter the upper bound: ");
    scanf("%d", &upper);

    printf("Krishnamurthy numbers between %d and %d are:\n", lower, upper);

    for (int num = lower; num <= upper; num++) {
        int temp = num, sum = 0;

        // Calculate the sum of factorials of digits
        while (temp > 0) {
            int digit = temp % 10;
            
            // Compute factorial of the digit
            int fact = 1;
            for (int i = 1; i <= digit; i++) {
                fact *= i;
            }

            sum += fact;
            temp /= 10;
        }

        // Check if the number is Krishnamurthy
        if (sum == num) {
            printf("%d ", num);
        }
    }
    printf("\n");

    return 0;
}