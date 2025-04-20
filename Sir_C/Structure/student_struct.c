#include <stdio.h>

#define SIZE 100

struct student {
    char name[SIZE];
    int roll;
    float subject[3];               // Array
    float total;
};

int main(){
    struct student s;           //s is a structure type variable of type student
    int c;      float total = 0.0;
    // Input given
    printf("Enter the student name: ");
    gets(s.name);
    printf("Enter the student roll: ");
    scanf("%d",&s.roll);
    for(c=0;c<3;c++){
        printf("Enter the score obtain for subject (%d): ",(c+1));
        scanf("%f",&s.subject[c]);
        total = total + s.subject[c];
    }
    s.total = total;

    //Output
    printf("\nName is: %s",s.name);
    printf("\nRoll is: %d",s.roll);
    printf("\nTotal is: %0.2f",s.total);
    return 0;
}