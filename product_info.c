#include <stdio.h>

struct Product {
    char name[50];
    int id;
    int quantity;
    float price;
    char manufacturer[50];
    char category[50];
};

int main() {
    struct Product p;

    printf("Enter Product Name (single word): ");
    scanf("%49s", p.name);

    printf("Enter Product ID: ");
    scanf("%d", &p.id);

    printf("Enter Quantity: ");
    scanf("%d", &p.quantity);

    printf("Enter Price: ");
    scanf("%f", &p.price);

    printf("Enter Manufacturer (single word): ");
    scanf("%49s", p.manufacturer);

    printf("Enter Category (single word): ");
    scanf("%49s", p.category);

    printf("\n--- Product Details ---\n");
    printf("Name         : %s\n", p.name);
    printf("ID           : %d\n", p.id);
    printf("Quantity     : %d\n", p.quantity);
    printf("Price        : %.2f\n", p.price);
    printf("Manufacturer : %s\n", p.manufacturer);
    printf("Category     : %s\n", p.category);

    return 0;
}
