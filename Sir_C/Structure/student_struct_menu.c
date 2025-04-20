#include<stdio.h>

#define SIZE 100

struct student {
    char name[SIZE];
    int roll;
    float subject[3];               // Array
    float total;
};

int main(){
    struct student s[3];           //s is a Array of Struct
    int c,d;      float total = 0.0;

    // Input given
    for(c=0;c<3;c++){
        s[c].roll = (c+1);
        printf("Student roll: %d",s[c].roll);
        printf("\nEnter the student name: ");
        gets(s[c].name);
        //printf("Enter the student roll: ");
        //scanf("%d",&s[c].roll);
        for(d=0;d<3;d++){
            printf("Enter the score obtain for subject (%d): ",(d+1));
            scanf("%f",&s[c].subject[d]);
            total = total + s[c].subject[d];
        }
        fflush(stdin);
        s[c].total = total;
        total = 0;
    }

    //Output
    for(c=0;c<3;c++){
        printf("\nName is: %s",s[c].name);
        printf("\nRoll is: %d",s[c].roll);
        printf("\nTotal is: %0.2f",s[c].total);
        printf("\n");
        for(d=0;d<20;d++){
            printf("-");
        }
    }
    return 0;
}