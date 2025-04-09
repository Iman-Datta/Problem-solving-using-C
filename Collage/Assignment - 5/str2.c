//write a program to find the length of a string

# include <stdio.h>

int main () {
    char str[100];
    int l = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[l] != '\0') {
        l++;
    }

    printf("The size of the array is: %d", l);

    return 0;
}