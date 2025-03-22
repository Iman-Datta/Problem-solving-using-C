#include<stdio.h>

int main() {
    int i,n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for ( i = 1; i <= n; i ++){ //1 2 3 4 5
        for(int j=1; j <= i; j++){ //1, 1 2, 1 2 3, 1 2 3 4, 1 2 3 4 5 
            printf("* ");
        }
        printf("\n");
    }
}