# include <stdio.h>

int main() {
    int i, n;
    printf("Enter number of row: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++ ){
        for( int space = 1; space <= n - i; space++) {
            printf(" ");
        }
        for (int j=1; j <= i; j++){
            printf("* ");
        }
        printf("\n");
        // printf("\n");
    }
}