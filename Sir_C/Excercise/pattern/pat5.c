# include <stdio.h>

int main() {
    int r,c,s,n;

    printf("Enter the number of row: ");
    scanf("%d", &n); //4

    for (r = 1; r <=n; r++) {
        for (c = 1; c <= r; c++){
            printf("*", c);
        }
        printf("\n");
    }
    return 0;
}