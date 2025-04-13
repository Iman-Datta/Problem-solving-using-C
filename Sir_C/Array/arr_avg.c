#define SIZE 100

int main(){
    float arr[SIZE], sum;
    int i, size=0;

    printf("Enter size for the array: ");
    scanf("%d",&size);

    // Taking user input
    for(i=0;i<size;i++){
        printf("Enter value for %d: ",(i+1));
        scanf("%f",&arr[i]);
    }

    //Showing output
    for(i=0;i<size;i++){
        printf("\nValue for %d is %0.2f",(i+1),arr[i]);
        sum=sum+arr[i];
    }
    printf("\nSum is %0.2f",sum);
    printf("\nAvg is %0.2f",sum/size);
    return 0;
}