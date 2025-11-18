#include <stdio.h>

int square(int num){
    int result = num * num;
    return result;
}
int main(){
    int a = square(2);
    int b = square(3);
    int c = square(4);

    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);  
}