# include <stdio.h>
# include <math.h>

int main() {
    int num, status = 0;
    lable:
        printf("Enter your number:");
        scanf("%d", &num);
        if (num <= 1) {
            printf("0 is not a prime number\n");
            goto lable;
        }
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            status = 1;
            break;
        }
        else if (num % i != 0) {
            status = 0;
        }
    }
    if (status == 1) {
        printf("%d is a composite number\n", num);
    }
    else{
        printf("%d is a prime number \n", num);
    }
    return 0;
}