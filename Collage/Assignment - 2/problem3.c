#include <stdio.h>
#define PI 3.14159

int main() {
    int choice;
    
    do {
        // Display the menu
        printf("\n--- Volume Calculator ---\n");
        printf("1. Volume of Sphere\n");
        printf("2. Volume of Cylinder\n");
        printf("3. Volume of Cone\n");
        printf("4. Volume of Cuboid\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            // Sphere Volume: (4/3) * π * r³
            float radius, volume;
            printf("Enter the radius of the sphere: ");
            scanf("%f", &radius);
            volume = (4.0 / 3.0) * PI * radius * radius * radius;
            printf("Volume of Sphere: %.2f\n", volume);
        } 
        else if (choice == 2) {
            // Cylinder Volume: π * r² * h
            float radius, height, volume;
            printf("Enter the radius and height of the cylinder: ");
            scanf("%f %f", &radius, &height);
            volume = PI * radius * radius * height;
            printf("Volume of Cylinder: %.2f\n", volume);
        } 
        else if (choice == 3) {
            // Cone Volume: (1/3) * π * r² * h
            float radius, height, volume;
            printf("Enter the radius and height of the cone: ");
            scanf("%f %f", &radius, &height);
            volume = (1.0 / 3.0) * PI * radius * radius * height;
            printf("Volume of Cone: %.2f\n", volume);
        } 
        else if (choice == 4) {
            // Cuboid Volume: l * w * h
            float length, width, height, volume;
            printf("Enter the length, width, and height of the cuboid: ");
            scanf("%f %f %f", &length, &width, &height);
            volume = length * width * height;
            printf("Volume of Cuboid: %.2f\n", volume);
        } 
        else if (choice == 5) {
            printf("Exiting program...\n");
        } 
        else {
            printf("Invalid choice! Please enter a valid option.\n");
        }

    } while (choice != 5);  // Repeat until user chooses to exit

    return 0;
}
