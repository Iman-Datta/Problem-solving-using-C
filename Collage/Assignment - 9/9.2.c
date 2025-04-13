#include <stdio.h>

int main() {
    FILE *fp;
    char subject[50];
    int mark, total = 0, count = 0;

    // Open file in read mode
    fp = fopen("marks.txt", "r");

    if (fp == NULL) {
        printf("Error: Could not open the file.\n");
        return 1;
    }

    printf("Subject\t\tMarks\n");
    printf("------------------------\n");

    // Read subject and mark until end of file
    while (fscanf(fp, "%s %d", subject, &mark) != EOF) {
        printf("%s\t\t%d\n", subject, mark);
        total += mark;
        count++;
    }

    fclose(fp);

    if (count == 0) {
        printf("No data found in file.\n");
        return 1;
    }

    float average = (float)total / count;
    printf("\nAverage Marks = %.2f\n", average);

    return 0;
}
