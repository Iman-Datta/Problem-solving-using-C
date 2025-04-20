# include <stdio.h>

int main() {
    int inp, count=2;
    label:
        printf("\nEnter a number to check whether its Prime/  not? ");
        scanf("%d",&inp);
        if(inp<1){
            printf("\nNumber below %d is no allowed",inp);
            goto label;
        }

        for(;;){
            if(count<inp) {
                if(inp % count == 0){
                printf("\n%d is not a Prime number",inp);
                break;
            }
                count++;
            } else
                break;
        }

        if(count==inp)
            printf("\n%d is a Prime number",inp);
        return 0;
}