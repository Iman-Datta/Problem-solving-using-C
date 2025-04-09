#include <stdio.h>

int main() {
    int n, k;

    // Step 1: Input size
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    // Step 2: Input array elements
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Step 3: Input split position
    printf("Enter the position to split the array (0 to %d): ", n-1);
    scanf("%d", &k);

    if(k < 0 || k > n) {
        printf("Invalid position! Must be between 0 and %d.\n", n);
        return 1;
    }

    // Step 4: Split and display both parts
    printf("\nFirst part of array:\n");
    for(int i = 0; i < k; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nSecond part of array:\n");
    for(int i = k; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}
