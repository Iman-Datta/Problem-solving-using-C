#include <stdio.h>

int main() {
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];  // Declare array
    int *ptr = arr;  // Pointer to the first element of array

    // Read elements into the array using pointer
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", ptr + i);  // Equivalent to &arr[i]
    }

    // Display elements using pointer
    printf("The elements are:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", *(ptr + i));  // Equivalent to arr[i]
    }

    return 0;
}