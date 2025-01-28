#include<stdio.h>
#include<math.h>

int main()
{
    int num,sum =0,r;
    printf("Enter your number");
    scanf("%d",&num); //114
    while (num > 0)
    {
     r = num % 10; //4
     sum = num +r; //4
     num = num/10; //14
     printf("%d",sum);
    }
    return 0;
}