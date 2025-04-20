# include <stdio.h>

int main(){
    int n1,n2,ch;
    printf("1. Add") ;
    printf("\n2. Sub") ;
    printf("\n3. Mul") ;
    printf("\nEnter your choice: ") ;
    scanf("%d",&ch);
 
    if((ch<1)||(ch>3)){
         printf("Wrong choice ");
         exit(1);
    }
 
     printf("Enter two numbers: ");
     scanf("%d%d",&n1,&n2);
    //Decision making statement
    switch(ch){
     case 1:
         printf("Sum of %d and %d is %d",n1,n2,(n1+n2));
         break;
     case 2:
         printf("Diff of %d and %d is %d",n1,n2,(n1-n2));
         break;
     case 3:
         printf("Mul of %d and %d is %d",n1,n2,(n1*n2));
         break;
     default:
         printf("Wrong choice ");
    }
     return 0;
 }