#include <stdio.h>

int main() {
    char op;
    float a, b, result;

    printf("Enter operator (+, -, *, /): ");
    scanf("%c", &op);

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    switch (op) {
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '*':
            result = a * b;
            break;
        case '/':
            if (b != 0)
                result = a / b;
            else {
                printf("Error: Division by zero not allowed\n");
                return 0;
            }
            break;
        default:
            printf("Invalid operator!\n");
            return 0;
    }

    printf("Result: %.2f\n", result);

    return 0;
}
