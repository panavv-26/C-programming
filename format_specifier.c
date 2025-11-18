#include <stdio.h>
int main() {
    int number = 42;
    float decimal = 3.14159;
    char character = 'A';
    char string[] = "Hello, World!";
    
    printf("Integer: %d\n", number);
    printf("Float: %.5f\n", decimal);
    printf("Character: %c\n", character);
    printf("String: %s\n", string);
    // adding width into C

    int num1 = 1;
    int num2 = 10;
    int num3 = 100;

    printf("%3d\n", num1);
    printf("%3d\n", num2);
    printf("%3d\n", num3);
    // Now 0 can be also added before width
    printf("%03d\n", num1);
    printf("%03d\n", num2);
    printf("%03d\n", num3);
    // Precision with floats
    float price1 = 5.5;
    float price2 = 123.4567;
    printf("%.2f\n", price1);
    printf("%.2f\n", price2);

    // now adding width into precision
    printf("%8.2f\n", price1);
    printf("%8.2f\n", price2); 
    return 0;
}