#include <stdio.h>
int main() {
    int a,b;
    printf("Enter the First Number:\n");
    scanf("%d", &a);
    printf("Enter the Second Number:\n");
    scanf("%d", &b);

    printf("Therefore the remainder would be %d", a%b);
    return 0;
}