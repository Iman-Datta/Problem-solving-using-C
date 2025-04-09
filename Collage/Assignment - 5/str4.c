# include <stdio.h>

int main () {
    char str[100], ch;
    int count = 0, i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Vowels in the string: ");
    for(i = 0; str[i] != '\0'; i++){
        ch = str[i];

        if (ch == 'a' || ch == 'e' || ch == 'i' ||
            ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' ||
            ch == 'O' || ch == 'U') {

            printf("%c ", ch);  // Print the vowel
            count++;            // Increment vowel count
        }
    }

    printf("\nTotal number of vowels: %d\n", count);

    return 0;
}