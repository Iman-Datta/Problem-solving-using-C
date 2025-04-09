#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    char department[30];
    float salary;
};

int main() {
    int n, i;
    printf("Enter number of employees: ");
    scanf("%d", &n);

    struct Employee emp[n];

    for (i = 0; i < n; i++) {
        printf("\nEnter details for Employee %d:\n", i + 1);

        getchar(); // Clear newline before fgets
        printf("Name: ");
        fgets(emp[i].name, sizeof(emp[i].name), stdin);

        printf("ID: ");
        scanf("%d", &emp[i].id);

        getchar(); // Clear newline before fgets
        printf("Department: ");
        fgets(emp[i].department, sizeof(emp[i].department), stdin);

        printf("Salary: ");
        scanf("%f", &emp[i].salary);
    }

    // Display employee data
    printf("\n------ Employee Details ------\n");
    for (i = 0; i < n; i++) {
        printf("\nEmployee %d\n", i + 1);
        printf("Name       : %s", emp[i].name);
        printf("ID         : %d\n", emp[i].id);
        printf("Department : %s", emp[i].department);
        printf("Salary     : %.2f\n", emp[i].salary);
    }

    return 0;
}