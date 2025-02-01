// Write a Program to accept the marks of a student and display their grade.
//[100-90: O, 89-80: E, 79-70: A, 69-60: B, 59-50: C, 49-40: D, Rest: F]

#include <stdio.h>

int main(void) {
    int mark;
    printf("---------- MARKSHEET ---------------\n");
    printf("Enter your total marks (0 - 100): ");
    scanf("%d", &mark);

    if (mark > 100 || mark < 0) {
        printf("Invalid input! Marks should be between 0 and 100.\n");
    } 
    else if (mark >= 90) {
        printf("Grade: O\n");
    } 
    else if (mark >= 80) {
        printf("Grade: E\n");
    } 
    else if (mark >= 70) {
        printf("Grade: A\n");
    } 
    else if (mark >= 60) {
        printf("Grade: B\n");
    } 
    else if (mark >= 50) {
        printf("Grade: C\n");
    } 
    else if (mark >= 40) {
        printf("Grade: D\n");
    } 
    else {
        printf("Grade: F\n");
    }

    return 0;
}