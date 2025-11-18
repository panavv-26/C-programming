#include <stdio.h>
int main() {
    int num1;
    printf("Enter the first number:\n");
    scanf("%d", &num1);
    int num2;
    printf("Enter the second number:\n");
    scanf("%d", &num2);
    int product = num1 * num2;
    printf("The Product of two nos. is %d\n", product);

    return 0;

}