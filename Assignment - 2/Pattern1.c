#include <stdio.h>

int main() {
    int rows = 4; // Number of rows in the pattern

    for (int i = 1; i <= rows; i++) {  // Loop for rows
        for (int j = 1; j <= i; j++) { // Loop for printing '*'
            printf("*");
        }
        printf("\n"); // Move to the next line after printing a row
    }

    return 0;
}