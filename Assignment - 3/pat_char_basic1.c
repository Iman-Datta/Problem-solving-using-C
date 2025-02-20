# include<stdio.h>

int main() {
    char n;
    printf("Enter the charector : ");
    scanf("%d", &n);

    for(int i = 1; i<= n; i ++){
        for(char j = 'A'; j <= 'D'; j ++){
            printf("%c ", j);
        }
        printf("\n");
    }
}