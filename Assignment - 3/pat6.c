# include<stdio.h>

int main() {
    char n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(int i = 1; i<= n; i ++){
        for(int j = 1; j <= i; j ++){
            printf("%c ", 'A' + (2 * j - 2));
        }
        printf("\n");
    }
}