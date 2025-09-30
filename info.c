#include <stdio.h>

void displayStudent(char name[], int roll, float marks) {
    printf("\n--- Student Details ---\n");
    printf("Name      : %s\n", name);
    printf("Roll No.  : %d\n", roll);
    printf("Marks     : %.2f\n", marks);
}

int main() {
    char name[50];
    int roll;
    float marks;

    printf("Enter Name: ");
    fgets(name, sizeof(name), stdin);  // safer than gets
    printf("Enter Roll Number: ");
    scanf("%d", &roll);
    printf("Enter Marks: ");
    scanf("%f", &marks);

    displayStudent(name, roll, marks);
    return 0;
}
