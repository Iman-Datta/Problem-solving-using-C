# include<stdio.h>

int main() {
    char n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(int i = 1; i<= n; i ++){
        for(int j = 1; j <= i; j = j ++){
            printf("%c ", 'A' + j - 1);
        }
        printf("\n");
    }
}