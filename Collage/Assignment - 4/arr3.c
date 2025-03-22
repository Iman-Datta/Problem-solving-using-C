# include <stdio.h>
int main() 
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);

    int arr[n];

    printf("Enter %d element of 1st array: \n", n);

    for (int i = 1;i <= n; i++){
        printf("Element %d: ",i );
        scanf("%d", &arr[i]);
    }
    int largest = arr[0];
    int smallest = arr[0];

    for(int i= 1; i<=n; i++){
        if (arr[i] > largest){
            largest = arr[i];
        }
        if (arr[i]<smallest){
            smallest = arr[i];
        }
    }
    printf("The lardest elemt is: %d \n", largest);
    printf("The smallest element is: %d \n",smallest);
    return 0;
}