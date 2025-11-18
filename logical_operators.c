#include <stdio.h>
int main() {
   /*
   printf("%d\n", (5 > 3) && (8 > 5)); // Both conditions are true, so the result is true (1)
    printf("%d\n", (5 > 3) || (8 < 5)); // One condition is true, so the result is true (1)
    printf("%d\n", !(5 > 3));            // The condition is true, so the negation is false (0)
    printf("%d\n", !(5 < 3));            // The condition is false, so the negation is true (1)
    return 0;*/
   
   
   

    int temp = -1;
    if (temp <=0 && temp >= 30) {
        printf("Bad Temperature.\n");
    } else {
        printf("GoodTemperature.\n");
    }
    return 0;
}