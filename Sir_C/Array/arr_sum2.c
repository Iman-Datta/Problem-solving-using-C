# include <stdio.h>

int main(){
    int arr[5];
    int i, evn_sum, odd_sum, ch;
    i = evn_sum = odd_sum = 0;

    // Taking user input
    for(;i<5;i++){
        printf("Enter value for %d: ",(i+1));
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
            evn_sum = evn_sum + arr[i];
        else
            odd_sum = odd_sum + arr[i];
    }

    printf("\nPress 1 for odd");
    printf("\nPress 2 for even");
    printf("\nEnter your choice: ");
    scanf("%d",&ch);
    //Showing output
    i=0;
    for(;i<5;i++)
        printf("\nValue for %d is %d",(i+1),arr[i]);

    if(ch==1)
        printf("\nTotal of Odd sum is: %d",odd_sum);
    else
        printf("\nTotal of Even sum is: %d",evn_sum);
    return 0;
}