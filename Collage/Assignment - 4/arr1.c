# include <stdio.h>

int main() {
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);

    int arr[n];

    printf("Enter %d element: \n", n);

    for (int i = 1;i <= n; i++){
        printf("Element %d: \n",i );
        scanf("%d", &arr[i]);
    }

    printf("The entered elements are: \n");
    for (int i = 1; i <= n; i++){
        printf("Element %d: %d\n", i, arr[i]);
    }
    return 0;
}