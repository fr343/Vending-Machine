#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// Initialize items in the vending machine
int main() {
    printf("Available items in the vending machine:\n");
    printf("Press 1 to select coffee, 2 to select tea or 3 to select water\n");
    std::cout << "Select a beverage: \n";
    std::cout << "1. Tea\n";
    std::cout << "2. Coffee\n";
    std::cout << "3. Water\n";

    int choice;
    std::cout << "Enter your choice (1/2/3): ";
    std::cin >> choice;

    if (choice == 1) {
        std::cout << "You selected Tea.\n";
    } else if (choice == 2) {
        std::cout << "You selected Coffee.\n";
    } else if (choice == 3) {
        std::cout << "You selected Water.\n";
    } else {
        std::cout << "Invalid choice. Please select a valid option (1/2/3).\n";
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



