#include <stdio.h>

int main() {
    int n = 5; // Since the pattern is a fixed 5x5 matrix

    for (int i = 0; i < n; i++) {  // Row loop
        for (int j = 0; j < n; j++) {  // Column loop
            if (i == j || i + j == n - 1) {  
                printf("1 ");
            } else {
                printf("0 ");
            }
        }
        printf("\n");  // Move to next line
    }

    return 0;
}
