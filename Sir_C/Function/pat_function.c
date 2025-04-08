# include <stdio.h>

void welcome(void){
    printf("\nWelcome to a Pattern");
}

void pattern(int n){
    int c,d;
    for(c=1;c<=n;c++){
        for(d=1;d<=c;d++){
            printf("%d",d);
        }
        printf("\n");
    }
}

int main() {
    int x;              // Declaring variable
    welcome();
    printf("\nEnter a number: ");
    scanf("%d",&x);
    pattern(x);
    return 0;
}