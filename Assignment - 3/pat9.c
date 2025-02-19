#include <stdio.h>

int main() {
    int n, i, j, k, num, den, coeff;
    
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        for (k = n - 1; k > i; k--) {
            printf(" ");
        }
        for (j = 0; j <= i; j++) {
            printf("%d ", coeff);
            coeff = coeff * (i - j) / (j + 1);
        }

        printf("\n");
    }
    
    return 0;
}