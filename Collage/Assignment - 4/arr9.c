#include <stdio.h>

int main() {
    int arr[100], n, i;
    int even_pos = 0, odd_pos = 0;

    // Input size of array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Input elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Check positions
    for (i = 0; i < n; i++) {
        if (i % 2 == 0)
            even_pos++;
        else
            odd_pos++;
    }

    // Output results
    printf("Number of elements at even positions: %d\n", even_pos);
    printf("Number of elements at odd positions: %d\n", odd_pos);

    return 0;
}
