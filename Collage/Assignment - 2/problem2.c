#include <stdio.h>

int main() {
    int n, first = 0, second = 1, next;

    // Get the number of terms from the user
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Sequence of %d terms:\n", n);

    for (int i = 0; i < n; i++) {
        if (i <= 1) {
            next = i;  // First two terms: 0, 1
        } else {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d ", next);
    }
    printf("\n");

    return 0;
}