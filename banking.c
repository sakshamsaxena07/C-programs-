#include <stdio.h>

float balance = 0.0f;

void deposit(float amount) {
    balance += amount;
    printf("Deposited %.2f successfully.\n", amount);
}

void withdraw(float amount) {
    if (amount <= balance) {
        balance -= amount;
        printf("Withdrawn %.2f successfully.\n", amount);
    } else {
        printf("Insufficient balance!\n");
    }
}

void checkBalance() {
    printf("Current Balance: %.2f\n", balance);
}

int main() {
    int choice;
    float amount;

    do {
        printf("\n--- Banking Menu ---\n");
        printf("1. Deposit\n2. Withdraw\n3. Check Balance\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);
                deposit(amount);
                break;
            case 2:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);
                withdraw(amount);
                break;
            case 3:
                checkBalance();
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice! Try again.\n");
        }
    } while(choice != 4);

    return 0;
}
