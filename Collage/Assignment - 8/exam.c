# include <stdio.h>

int main () {
    int a, b, c;
    int *p1, *p2;

    printf("Enter your 1st number: ");
    scanf("%d", &a);
    getchar();
    printf("Enter your 2nd number: ");
    scanf("%d", &b);

    p1 = &a;
    p2 = &b;

    c = *p1 + *p2;
    printf("Sum (using pointers): %d\n", c);

    printf("Adress of 1st number is: %p \n", (void*)p1);
    printf("Adress of the 2nd number is: %p \n", (void*)p2);

    return 0;
}