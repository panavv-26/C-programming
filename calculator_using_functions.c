#include <stdio.h>

float calc(float a, float b, char op) {
    switch(op) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/': return b != 0 ? a / b : 0;
        default: return 0;
    }
}

int main() {
    float a, b;
    char op;

    scanf("%f %f %c", &a, &b, &op);
    printf("Result = %.2f", calc(a, b, op));
    return 0;
}
