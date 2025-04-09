#include <stdio.h>

int main() {
    int arr1[100], arr2[100], merged[200];
    int size1, size2, i, j;

    // Input size of first array
    printf("Enter the number of elements in the first array: ");
    scanf("%d", &size1);

    // Input elements of first array
    printf("Enter %d elements for the first array:\n", size1);
    for (i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }

    // Input size of second array
    printf("Enter the number of elements in the second array: ");
    scanf("%d", &size2);

    // Input elements of second array
    printf("Enter %d elements for the second array:\n", size2);
    for (i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Merge arrays
    for (i = 0; i < size1; i++) {
        merged[i] = arr1[i];
    }
    for (j = 0; j < size2; j++) {
        merged[i + j] = arr2[j];
    }

    // Print merged array
    printf("Merged array:\n");
    for (i = 0; i < size1 + size2; i++) {
        printf("%d ", merged[i]);
    }

    return 0;
}
