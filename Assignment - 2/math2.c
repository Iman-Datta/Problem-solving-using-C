//Write a Program to check whether a number is prime or composite.

# include<stdio.h>
# include<math.h>

int main () {

    int num,i,status = 0;
    printf("Enter your number: ");
    scanf("%d", &num);
    if (num <= 1) {
        printf("It is not a prime number");
    }
    else{
        for (i = 2; i <= sqrt(num); i ++) {
            if (num%i == 0) {
                status = 1;
                break;
            }
        }
    }
    if (status == 1) {
        printf("It is a composite number");
    }
    else{
        printf("It is a prime number");
    }
    return 0;
}