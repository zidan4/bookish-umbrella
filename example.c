
#include <stdio.h>

void add() {
    int a, b;
    printf("Enter two numbers to add: ");
    scanf("%d %d", &a, &b);
    printf("Result: %d\n", a + b);
}

void subtract() {
    int a, b;
    printf("Enter two numbers to subtract: ");
    scanf("%d %d", &a, &b);
    printf("Result: %d\n", a - b);
}

void multiply() {
    int a, b;
    printf("Enter two numbers to multiply: ");
    scanf("%d %d", &a, &b);
    printf("Result: %d\n", a * b);
}

void divide() {
    int a, b;
    printf("Enter two numbers to divide: ");
    scanf("%d %d", &a, &b);
    if (b != 0)
        printf("Result: %d\n", a / b);
    else
        printf("Error: Division by zero is not allowed.\n");
}

int main() {
    int choice;

    while (1) {
        printf("\nSimple Calculator\n");
        printf("1. Add\n");
        printf("2. Subtract\n");
        printf("3. Multiply\n");
        printf("4. Divide\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                add();
                break;
            case 2:
                subtract();
                break;
            case 3:
                multiply();
                break;
            case 4:
                divide();
                break;
            case 5:
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
