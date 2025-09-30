#include <stdio.h>

int main() {
    int mainChoice, subChoice;
    int a, b;
    printf("\nMain Menu:\n");
    printf("1. Relational\n2. Logical\n3. Bitwise\n4. Assignment\n5. Increment/Decrement\n");
    printf("Enter your main choice: ");
    scanf("%d", &mainChoice);

    switch (mainChoice) {
    case 1: // Relational
        printf("Enter two integers: ");
        scanf("%d %d", &a, &b);
        printf("1. >  2. <  3. ==  4. !=\nEnter sub-choice: ");
        scanf("%d", &subChoice);
        switch (subChoice) {
            case 1: printf("%d > %d = %d\n", a, b, a > b); break;
            case 2: printf("%d < %d = %d\n", a, b, a < b); break;
            case 3: printf("%d == %d = %d\n", a, b, a == b); break;
            case 4: printf("%d != %d = %d\n", a, b, a != b); break;
            default: printf("Invalid sub-choice!\n");
        }
        break;

    case 2: // Logical
        printf("Enter two integers (0/1 recommended): ");
        scanf("%d %d", &a, &b);
        printf("1. &&  2. ||  3. !a\nEnter sub-choice: ");
        scanf("%d", &subChoice);
        switch (subChoice) {
            case 1: printf("%d && %d = %d\n", a, b, a && b); break;
            case 2: printf("%d || %d = %d\n", a, b, a || b); break;
            case 3: printf("!%d = %d\n", a, !a); break;
            default: printf("Invalid sub-choice!\n");
        }
        break;

    case 3: // Bitwise
        printf("Enter two integers: ");
        scanf("%d %d", &a, &b);
        printf("1. &  2. |  3. ^  4. <<  5. >>\nEnter sub-choice: ");
        scanf("%d", &subChoice);
        switch (subChoice) {
            case 1: printf("%d & %d = %d\n", a, b, a & b); break;
            case 2: printf("%d | %d = %d\n", a, b, a | b); break;
            case 3: printf("%d ^ %d = %d\n", a, b, a ^ b); break;
            case 4: printf("%d << 1 = %d\n", a, a << 1); break;
            case 5: printf("%d >> 1 = %d\n", a, a >> 1); break;
            default: printf("Invalid sub-choice!\n");
        }
        break;

    case 4: // Assignment
        printf("Enter an integer: ");
        scanf("%d", &a);
        printf("1. +=  2. -=  3. *=  4. /=\nEnter sub-choice: ");
        scanf("%d", &subChoice);
        printf("Enter value to assign: ");
        scanf("%d", &b);
        switch (subChoice) {
            case 1: a += b; printf("Result: %d\n", a); break;
            case 2: a -= b; printf("Result: %d\n", a); break;
            case 3: a *= b; printf("Result: %d\n", a); break;
            case 4: 
                if (b != 0) { a /= b; printf("Result: %d\n", a); }
                else printf("Division by zero!\n");
                break;
            default: printf("Invalid sub-choice!\n");
        }
        break;

    case 5: // Increment/Decrement
        printf("Enter an integer: ");
        scanf("%d", &a);
        printf("1. ++a  2. a++  3. --a  4. a--\nEnter sub-choice: ");
        scanf("%d", &subChoice);
        switch (subChoice) {
            case 1: printf("++a = %d\n", ++a); break;
            case 2: printf("a++ = %d (after increment %d)\n", a, a+1); break;
            case 3: printf("--a = %d\n", --a); break;
            case 4: printf("a-- = %d (after decrement %d)\n", a, a-1); break;
            default: printf("Invalid sub-choice!\n");
        }
        break;

    default:
        printf("Invalid main choice!\n");
    }

    return 0;
}
