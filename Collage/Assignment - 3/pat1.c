#include<stdio.h>

int main() {
    int i,n;
    printf("Enter number of row: ");
    scanf("%d", &n);
    for (i = 1; i<= n; i++){ //4
        for (int j=1; j <=n; j ++){ //3 

            printf("* ");
        }
        printf("\n");
    }
    return 0;
}