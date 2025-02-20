# include <stdio.h>

int main() {
    int n;
    printf("Enter value of 'n': ");
    scanf("%d", &n);

    for (int i = n; i <= 1; i--) {
        for (int j = i; j <= n; j ++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}