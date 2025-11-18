#include <stdio.h>
void happyBirthday(char name [], int age){
    printf("hello my name is %s\n", name);
    printf("I am %d years old \n", age);
    printf("hello my name is panav\n");
    printf("hello my name is panav\n");
}
int main(){
    char name[]="Panav";
    int age = 25;
    happyBirthday(name,age);
    return 0;
}