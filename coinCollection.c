#include <stdio.h>

int main() {
    int coins = 0, amount = 0, coinValue;
    char choice;

    do {
        printf("Do you want to add a coin? (y/n): ");
        scanf(" %c", &choice);  // space before %c skips newline

        if (choice == 'y' || choice == 'Y') {
            printf("Enter coin value: ");
            scanf("%d", &coinValue);

            coins++;
            amount += coinValue;
        } 
        else if (choice == 'n' || choice == 'N') {
            printf("No more coins will be added.\n");
        } 
        else {
            printf("Invalid choice! Please enter y or n.\n");
        }

    } while (choice != 'n' && choice != 'N');

    printf("\nTotal coins collected: %d\n", coins);
    printf("Total amount collected: %d\n", amount);

    return 0;
}
