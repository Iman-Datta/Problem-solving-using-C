# include <stdio.h>
# include <math.h>

int main() {
    int num, choice, status;

    while (1) {
        printf("Press 1: To check your number is prime or not. \n");
        printf("Press 2: End the program \n");
        scanf("%d", &choice);

        if (choice == 1) {
            lable:
            printf("Enter your number: ");
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
        }
        else if (choice == 0) {
            printf("Progam ending...... \n");
            break;
        }
        else{
            printf("Enter a valid input \n");
        }
    }
}