#include <stdio.h>

int main() {
    int choice;
    float num1, num2;
    int n1, n2; // for modulus
    printf("Calculator Menu:\n");
    printf("1. Addition (+)\n2. Subtraction (-)\n3. Multiplication (*)\n4. Division (/)\n5. Modulus (%%)\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 5) { // Modulus requires integers
        printf("Enter two integers: ");
        scanf("%d %d", &n1, &n2);
        if (n2 != 0)
            printf("Result: %d %% %d = %d\n", n1, n2, n1 % n2);
        else
            printf("Error: Division by zero!\n");
    } else {
        printf("Enter two numbers: ");
        scanf("%f %f", &num1, &num2);
        switch (choice) {
            case 1: printf("Result: %.2f + %.2f = %.2f\n", num1, num2, num1 + num2); break;
            case 2: printf("Result: %.2f - %.2f = %.2f\n", num1, num2, num1 - num2); break;
            case 3: printf("Result: %.2f * %.2f = %.2f\n", num1, num2, num1 * num2); break;
            case 4:
                if (num2 != 0)
                    printf("Result: %.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
                else
                    printf("Error: Division by zero!\n");
                break;
            default: printf("Invalid choice!\n");
        }
    }
    return 0;
}
