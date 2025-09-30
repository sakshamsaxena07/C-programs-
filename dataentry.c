#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    char department[50];
    float salary;
};

void enterEmployee(struct Employee *e) {
    getchar(); // clear newline left by previous input
    printf("Enter Name: ");
    fgets(e->name, sizeof(e->name), stdin);
    printf("Enter ID: ");
    scanf("%d", &e->id);
    getchar();
    printf("Enter Department: ");
    fgets(e->department, sizeof(e->department), stdin);
    printf("Enter Salary: ");
    scanf("%f", &e->salary);
}

void displayEmployee(struct Employee e) {
    printf("\n--- Employee Details ---\n");
    printf("Name       : %s", e.name);
    printf("ID         : %d\n", e.id);
    printf("Department : %s", e.department);
    printf("Salary     : %.2f\n", e.salary);
}

int main() {
    struct Employee emp;
    enterEmployee(&emp);
    displayEmployee(emp);
    return 0;
}
