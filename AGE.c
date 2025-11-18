#include <stdio.h>
#include <stdbool.h> //for t and f
int main(){
    int age = 25;
    int year= 2025;
    double pi = 3.1412781283718121;
    char name[] = "Alice"; // Acts as a string
    bool isAdult = true; // Boolean variable
    printf("You age is %d years old\n", age);
    printf("The year is %d\n", year);
    printf("The value of pi is %.15lf\n", pi);
    printf("%d\n", isAdult);
    
    printf("Hello, %s!\n", name);

    return 0;
}
