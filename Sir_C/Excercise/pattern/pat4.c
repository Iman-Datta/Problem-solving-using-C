# include <stdio.h>

int main() {
    int r,c,s,n;

    printf("Enter the number of row: ");
    scanf("%d", &n); //4

    for (r = n; r >=1; r--) {
        for (c = r; c >= 1; c--){
            printf("%d ", c);
        }
        printf("\n");
    }
    return 0;
}