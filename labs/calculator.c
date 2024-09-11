








#include <stdio.h>
#include <math.h>

int main() {
    double a, b;
    int choice;

    // Input operands
    printf("Enter the first operand: ");
    scanf("%lf", &a);
    printf("Enter the second operand: ");
    scanf("%lf", &b);

    // Menu
    printf("Choose an operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Logarithm (base e)\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Result: %.2f\n", a + b);
            break;
        case 2:
            printf("Result: %.2f\n", a - b);
            break;
        case 3:
            printf("Result: %.2f\n", a * b);
            break;
        case 4:
            if (b == 0) {
                printf("ERROR: Division by zero\n");
            } else {
                printf("Result: %.2f\n", a / b);
            }
            break;
        case 5:
            if (a <= 0 || b <= 0) {
                printf("ERROR: Both operands must be positive for logarithm\n");
            } else {
                printf("Result: %.2f\n", log(b) / log(a));
            }
            break;
        default:
            printf("ERROR: Invalid choice\n");
            break;
    }

    return 0;
}
