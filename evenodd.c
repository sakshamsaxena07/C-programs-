#include <stdio.h>

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Using ternary operator
    (num % 2 == 0) ? printf("%d is Even\n", num)
                   : printf("%d is Odd\n", num);

    return 0;
}
