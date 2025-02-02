// Write a Program to check whether a given number is Perfect Number or
// not. Hint: 28. 1 + 2 + 4 + 7 + 14 = 28.


#include<stdio.h>
#include<math.h>

int main() {
    int num,i,sum=0;
    printf("Enter your number: \n");
    scanf("%d",&num);
    for (i= 1; i<=num; i++) {
        if (num % i == 0){
            sum = sum +i;
        }
    }
    if (sum == num) {
        printf("Perfect number");
    }
    else{printf("It is not a perfect number");
    }
}