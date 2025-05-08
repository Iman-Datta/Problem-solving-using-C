# include <stdio.h>

int main () {
    int n;
    char ch = 'A';

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(int i= n; i >= 0; i--){
        for(int j = 0; j <= i; j++) {
        printf("%c", ch);
    }
    ch ++;
    printf("\n");
    }
    return 0;
}