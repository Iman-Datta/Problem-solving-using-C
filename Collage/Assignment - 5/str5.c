#include <stdio.h>

int main() {
    char str[100];
    int i, length = 0, isPalindrome = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // keeps the newline character

    // Calculate the length manually (including '\n' if present)
    while (str[length] != '\0') {
        length++;
    }

    // Check palindrome including '\n'
    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 1 - i - 1]) {  // -1 for '\0'
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome) {
        printf("The string is a palindrome (with newline).\n");
    } else {
        printf("The string is not a palindrome (with newline).\n");
    }

    return 0;
}
