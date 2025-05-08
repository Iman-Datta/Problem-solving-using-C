# include <stdio.h>
int main() 
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);

    int arr[n]; // 1 2 3

    printf("Enter %d element of 1st array: \n", n);

    for (int i = 0;i < n; i++){
        printf("Element %d: ",i ); 
        scanf("%d", &arr[i]); // 1 2 3
    }
    int b[n];
    int m; // null
    
    for(int i= 0; i < n; i++){
    m = arr[i] ; // 1 2 3
    b[i] = m; // 1 2 3
    }

    printf("The entered elements are: \n");
    for (int i = 0; i < n; i++){
        printf("Element of 2nd array: %d\n", b[i]);
    }
    return 0;
}