#include <stdio.h>
int main() {
    int a = 4*3 / 6*2;
    printf("%d \n", a);
    int b =10*4*(2+3)*7+5/10;
    printf("%d\n", b);
    int c = 5+5-9*(3-1)+3;
    printf("%d\n", c);

    // Additional examples to illustrate operator precedence and associativity
    int x =2;
    int y =3;
    int z =4;
    //z = x+y;
    //z = x-y;
    //z = x*y;
    //z = x/y;
    z = x+y*z; // z = 2 + 3*4 = 2 + 12 = 14
    printf("%d\n", z);
    z = x % y; // z = 2 % 3 = 2
    printf("%d\n", z);
    //INCREMENT 
    //Represented by ++ for e.g x++;
    
    //DECREMENT
    //Represented by --
   // x--; // Decrement x by 1
 // Output will be 1 since x was decremented from 2 to 1
    //augmented assignment operators
    x+=5; // x= x+5
    printf("%d\n", x);// Output will be 7 since x was 2 and then 5 was added to it
    y-=2; // y=y-2
    printf("%d\n", y); // Output will be 1 since y was 3 and then 2 was subtracted from it
    z*=2; // z=z*2
    printf("%d\n", z); // Output will be 28 since z was 14 and then multiplied by 2
    z/=4; // z=z/4
    printf("%d\n", z); // Output will be 7 since z was 28 and then divided by 4
    return 0;
}
// The output will be 4 because the operations are performed from left to right as per C operator precedence rules.