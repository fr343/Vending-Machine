#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Initialize items in the vending machine
int main() {
    printf("Available items in the vending machine:\n");
    printf("Select a beverage: \n");
    printf("1. Tea\n");
    printf("2. Coffee\n");
    printf("3. Water\n");

    int choice;
    printf("Enter your choice (1/2/3): ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("You selected Tea.\n");
    } else if (choice == 2) {
        printf("You selected Coffee.\n");
    } else if (choice == 3) {
        printf("You selected Water.\n");
    } else {
        printf("Invalid choice. Please select a valid option (1/2/3).\n");
    }

    return 0;
}

typedef struct {
    char name[50];
    double price;
    int quantity;
    int min_quantity;
} Item;

Item vendingMachine[] = {
    {"Coffee", 1.5, 10, 3},
    {"Tea", 1.0, 15, 5},
    {"Water", 0.75, 20, 8}
};



