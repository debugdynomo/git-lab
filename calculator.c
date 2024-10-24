#include <stdio.h>

int add(int i, int j) {
    return (i + j);
}

int subtract(int i, int j) {
    return (i - j);
}

int multiply(int i, int j) {
    return (i * j);
}

float divide(int i, int j) {
    if (j == 0) {
        printf("Error: Division by zero is not allowed.\n");
        return 0; // Return 0 to indicate an error.
    }
    return ((float) i / j);  // Explicit type casting to float for decimal results.
}

int main() {
    int a, b;
    char operation;
    char confirm = 'n';

    do {
        printf("\nChoose an operation (+, -, *, /, ^, #, i):\n");
        printf("i: Inverse of a number\n");
        
        printf("Enter operation: ");
        scanf(" %c", &operation);

        switch (operation) {
            case 'i':
                printf("Enter an integer: ");
                scanf("%d", &a);
                printf("Will be implemented soon...\n");
                break;
            default:
                printf("Invalid operation. Please try again.\n");
        }

        printf("Do you want to perform another operation [y/N]? ");
        scanf(" %c", &confirm);
    } while (confirm == 'y' || confirm == 'Y');

    return 0;
}
