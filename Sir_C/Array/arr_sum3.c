#define SIZE 100

int main(){
    int arr[SIZE], start_pos, end_pos, size;
    int i, sum = 0;
    printf("Enter size for the array: ");
    scanf("%d",&size);

    // Taking user input
    for(;i<size;i++){
        printf("Enter value for %d: ",(i+1));
        scanf("%d",&arr[i]);
    }

    printf("\nPress the start index: ");
    scanf("%d",&start_pos);

    printf("\nPress the end index: ");
    scanf("%d",&end_pos);

    //Showing output
    for(i=start_pos-1;i<end_pos;i++){
        printf("\nValue for %d is %d",(i+1),arr[i]);
        sum=sum+arr[i];
    }
    printf("\nSum is %d",sum);
    return 0;
}