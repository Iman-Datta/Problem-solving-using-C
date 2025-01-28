#include<stdio.h>
#include<math.h>

int main() {
    int num,i,f;
    printf("Enter your number: \n");
    scanf("%d",&num);
    if (num <= 1){
        printf("This is not priem number");
    }
    else{
        for(i=2; i<=num/2;i++)
        {
            if (num%i == 0)
            {
                f = 1;
                break;
            }
        }
            if (f == 0) {
                printf("The number is prime");
            }
            else
{
                printf("The number is composite");
            }
        }
    }
