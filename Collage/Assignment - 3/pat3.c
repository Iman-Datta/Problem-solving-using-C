# include <stdio.h>

int main() {
    int i, n;
    printf("Enter number of column: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++ ){ //1, 2, 3, 4, 5
        for( int space = 1; space <= n - i; space++) { //1, 2, 3, 4
            printf(" ");
        }
        for (int j=1; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }
}