# include <stdio.h>

int main( ) {
    int n, r, c;

    printf("Enter the value of row: ");
    scanf("%d", &n);

    for(r = 1; r <= n; r++) {
        for(c = 1; c <= n; c++){
            printf(" *");
        }
        printf("\n");
    }
    return 0;
}