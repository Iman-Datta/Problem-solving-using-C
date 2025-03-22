# include <stdio.h>

int main() {
    int i, n;
    printf("Enter number of n: ");
    scanf("%d", &n);
    for (i = n; i >= 1; i-- ){ //5, 4, 3, 2, 1
        for( int space = 1; space <= n - i; space++) { //1 2 3 4
            printf(" ");
        }
        for (int j=1; j <= i; j++){ //1 2 3 4 5, 1 2 3 4, 1 2 3, 1 2, 1
            printf("* ");
        }
        printf("\n");
    }
}