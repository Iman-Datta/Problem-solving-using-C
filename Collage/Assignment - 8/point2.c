# include <stdio.h>

int main () {
    int a, b, temp;
    int *p1, *p2;

    printf("Enter your 1st number: ");
    scanf("%d", &a);

    printf("Enter your 2nd number: ");
    scanf("%d", &b);

    p1 = &a;
    p2 = &b;

    temp = *p1;
    *p1 = *p2;
    *p2 = temp;

    printf("Your 1st number is: %d\n", a);
    printf("Your 2nd number is: %d\n", b);

    return 0;
}