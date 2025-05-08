# include <stdio.h>

int main () {
    int n,sum = 0;

    printf("Enter your number: ");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++) {
        if(i % 2 == 0) {
            sum = sum-i;
        }
        else{
        sum = sum + i;
        }
    }
    printf("The sum of the serise is: %d", sum);
    return 0;
}