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
    int b[n];
    int m;
    
    for(int i= 1; i <= n; i++){
    m =arr[i] ;
    b[i]=m;
    }
    printf("The entered elements are: \n");
    for (int i = 1; i <= n; i++){
        printf("Element of 2nd array: %d\n", b[i]);
    }
    return 0;
}