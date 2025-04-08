# include <stdio.h>

void welcome(void){
    printf("\nWelcome to Function:");
}


int add(int a, int b){
    int c;
    c=a+b;
    return c;
}

int main() {
    int x,y,z;              // Declaring variable
    welcome();
    printf("\nEnter two number: ");
    scanf("%d%d",&x,&y);
    //Calling the function
    z=add(x,y);
    printf("\nSum of %d and %d is %d",x,y,z);
    z=product(x,y);
    printf("\nMultiplication of %d and %d is %d",x,y,z);
    return 0;
}

int product(int a, int b){
    int c;
    c=a*b;
    return c;
}