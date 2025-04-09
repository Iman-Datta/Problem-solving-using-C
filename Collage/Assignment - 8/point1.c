#include <stdio.h>

int main() {
    int a, b, sum;
    int *ptr1, *ptr2;

    // Input two numbers
    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    // Assign addresses to pointers
    ptr1 = &a;
    ptr2 = &b;

    // Add using pointers
    sum = *ptr1 + *ptr2;

    // Output results
    printf("\n--- Results ---\n");
    printf("Value of a: %d\n", a);
    printf("Address of a: %p\n", (void*)ptr1);

    printf("Value of b: %d\n", b);
    printf("Address of b: %p\n", (void*)ptr2);

    printf("Sum (using pointers): %d\n", sum);

    return 0;
}
