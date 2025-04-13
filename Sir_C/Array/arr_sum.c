# include <stdio.h>

int main(){
    int arr[5];
    int i=0, sum=0;

    // Taking user input
    for(;i<5;i++){
        printf("Enter value for %d: ",(i+1));
        scanf("%d",&arr[i]);

        sum = sum + arr[i];
    }

    //Showing output
    i=0;
    for(;i<5;i++){
        printf("\nValue for %d is %d",(i+1),arr[i]);
    }
    printf("\nTotal is: %d",sum);
    return 0;
}