#include <stdio.h>

int main() {
    int rows = 5; // Number of rows in the pattern

    for (int i = rows; i >= 1; i--) {  // Loop for rows (starts from max to 1)
        for (int j = 1; j <= i; j++) { // Loop for printing '*'
            printf("* ");
        }
        printf("\n"); // Move to the next line after printing a row
    }

    return 0;
}