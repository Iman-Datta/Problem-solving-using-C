#include <stdio.h>

struct Student {
    char name[50];
    int rollNo;
    char stream[20];
    float marks;
};

int main() {
    struct Student s;

    // Input student details
    printf("Enter student name: ");
    fgets(s.name, sizeof(s.name), stdin);

    printf("Enter roll number: ");
    scanf("%d", &s.rollNo);

    getchar(); // To consume leftover newline from scanf

    printf("Enter stream: ");
    fgets(s.stream, sizeof(s.stream), stdin);

    printf("Enter marks: ");
    scanf("%f", &s.marks);

    // Display student details
    printf("\n--- Student Information ---\n");
    printf("Name     : %s", s.name);
    printf("Roll No. : %d\n", s.rollNo);
    printf("Stream   : %s", s.stream);
    printf("Marks    : %.2f\n", s.marks);

    return 0;
}