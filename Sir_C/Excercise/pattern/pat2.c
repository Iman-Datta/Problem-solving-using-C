# include <stdio.h>

int main() {
    int r,c,s,n;
    printf("\nEnter number of rows: ");
    scanf("%d",&n);             //3

    s=n-1;
    for(r=1;r<=n;r++){
        for(c=1;c<=s;c++){
            printf(" ");
        }
        for(c=1;c<=r;c++){
            printf("%d",c);
        }
        printf("\n");
        s--;
    }

    return 0;
}