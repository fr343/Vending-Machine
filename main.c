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
    printf("Enter your choice (0/1/2/3): ");
    scanf("%d", &choice);
    
if (choice == 0) {
        printf("Purchase canceled.\n");
    } else if (choice == 1) {
        printf("You selected Tea.\n");
    } else if (choice == 2) {
        printf("You selected Coffee.\n");
    } else if (choice == 3) {
        printf("You selected Water.\n");
    } else {
        printf("Invalid choice. Please select a valid option (0/1/2/3).\n");
    }

 // Confirmation
        char confirm;
        printf("Confirm your selection (Yes/No): ");
        scanf(" %c", &confirm); 

        if (confirm == 'Yes' || confirm == 'y') {
            printf("Thank you for your purchase!\n");
            break;
        } else if (confirm == 'No' || confirm == 'n') {
            continue; 
        } else {
            printf("Invalid input. Please enter 'Yes' to confirm or 'No' to choose again.\n");
            continue; 
        }
    }

    return 0;




