# include <stdio.h>

int main( ) {
    int n;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    for(int i = 0; i < n; i++) {
        printf("Enter the value of %d: ", (i+1));
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n; i++) {
        printf("\n Value of %d is %d", (i+1), arr[i]);
    }
    return 0;
}