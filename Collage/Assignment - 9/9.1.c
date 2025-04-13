#include <stdio.h>

int main() {
    FILE *fp;
    char ch;

    // Open file in read mode
    fp = fopen("myfile.txt", "r");

    if (fp == NULL) {
        printf("Error: Could not open the file.\n");
        return 1;
    }

    printf("Contents of the file:\n\n");

    // Read and display each character
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }

    // Close the file
    fclose(fp);

    return 0;
}
