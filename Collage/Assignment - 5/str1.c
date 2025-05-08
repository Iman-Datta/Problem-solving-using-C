#include <stdio.h>

int main() {
    char name[100];  // Declare a character array (string)

    // Ask for name
    printf("Enter your name: ");
    gets(name);  // Read string input (including spaces)

    // Print the name
    printf("Hello %s", name);

    return 0;
}