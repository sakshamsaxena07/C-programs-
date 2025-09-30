#include <stdio.h>

float calculateSalary(float basic, int isMetro) {
    float hra = basic * (isMetro ? 0.15f : 0.10f);
    float da  = basic * 0.05f;
    return basic + hra + da;
}

int main() {
    float basic;
    int metro;
    printf("Enter Basic Salary: ");
    scanf("%f", &basic);
    printf("Is employee in metro city? (1=Yes, 0=No): ");
    scanf("%d", &metro);
    printf("Monthly Salary = %.2f\n", calculateSalary(basic, metro));
    return 0;
}
