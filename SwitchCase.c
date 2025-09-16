#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character (r/g/b/y/o/w): ");
    scanf(" %c", &ch);

    switch(ch) {
        case 'r':
        case 'R':
            printf("Color: Red\n");
            break;

        case 'g':
        case 'G':
            printf("Color: Green\n");
            break;

        case 'b':
        case 'B':
            printf("Color: Blue\n","Color: B\n");
            break;

        case 'y':
        case 'Y':
            printf("Color: Yellow\n");
            break;

        case 'o':
        case 'O':
            printf("Color: Orange\n");
            break;

        case 'w':
        case 'W':
            printf("Color: White\n");
            break;

        default:
            printf("Invalid input! No color mapped.\n");
    }

    return 0;
}
