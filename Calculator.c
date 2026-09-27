#include <stdio.h>

int main(void) {
    double first, second;
    char operator;

    printf("Enter an operation (+, -, *, /): ");
    if (scanf(" %c", &operator) != 1) {
        printf("Could not read the operation.\n");
        return 1;
    }

    printf("Enter two numbers: ");
    if (scanf("%lf %lf", &first, &second) != 2) {
        printf("Please enter two valid numbers.\n");
        return 1;
    }

    switch (operator) {
        case '+':
            printf("Result: %.2f\n", first + second);
            break;
        case '-':
            printf("Result: %.2f\n", first - second);
            break;
        case '*':
            printf("Result: %.2f\n", first * second);
            break;
        case '/':
            if (second == 0) {
                printf("Error: cannot divide by zero.\n");
                return 1;
            }
            printf("Result: %.2f\n", first / second);
            break;
        default:
            printf("Unknown operation: %c\n", operator);
            return 1;
    }

    return 0;
}
