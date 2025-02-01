#include <stdio.h>

int main() {
    int start, end;

    
    printf("Enter the lower bound: ");
    scanf("%d", &start);
    
    printf("Enter the upper bound: ");
    scanf("%d", &end);

    
    if (start > end) {
        printf("Invalid range\n");
        return 1;
    }

    printf("Palindromic numbers in the range:\n");

    
    for (int num = start; num <= end; num++) {
        int originalnum = num, reversednum = 0, remainder;

        
        while (originalnum > 0) {
            remainder = originalnum % 10;
            reversednum = reversednum * 10 + remainder;
            originalnum /= 10;
        }

        
        if (num == reversednum) {
            printf("%d ", num);
        }
    }
    
    printf("\n"); 
    return 0;
}
