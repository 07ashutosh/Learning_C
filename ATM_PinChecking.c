#include <stdio.h>

int main() {
    int pin = 7102;
    int checkPin;

    for (int i = 1; i <= 3; i++) {
        printf("Enter the pin: ");
        scanf("%d", &checkPin);

        if (checkPin == pin) {
            printf("Logged in successfully!\n");
            return 0;
        } else {
            if (i < 3) {
                printf("Wrong PIN! Try again. Attempts left: %d\n", 3 - i);
            } else {
                printf("You don't have any chances left. Access denied.\n");
            }
        }
    }

    return 0;
}
