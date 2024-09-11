#include <stdio.h>
#include <math.h>

int main() {
    double a, b, result;
    int choice;

    // Input two operands
    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);

    printf("Choose an operation:\n");
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Logarithm (base a)\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            result = a + b;
            printf("Result: %.2f\n", result);
            break;
        case 2:
            result = a - b;
            printf("Result: %.2f\n", result);
            break;
        case 3:
            result = a * b;
            printf("Result: %.2f\n", result);
            break;
        case 4:
            if (b != 0) {
                result = a / b;
                printf("Result: %.2f\n", result);
            } else {
                printf("ERROR: Division by zero!\n");
            }
            break;
        case 5:
            if (a > 0 && b > 0) {
                result = log(b) / log(a);
                printf("Result: %.2f\n", result);
            } else {
                printf("ERROR: Both numbers must be positive for logarithms!\n");
            }
            break;
        default:
            printf("ERROR: Invalid operation!\n");
    }

    return 0;
}
