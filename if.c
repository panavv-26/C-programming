#include <stdio.h>
int main(){
    // If statement = do some code if condition is met
    int age = 0;

    printf("Enter your age:\n");
    scanf("%d", &age);
    if(age>=18){
        printf("You are an adult.\n");
    }
    else if(age>=13){
        printf("You are a teenager.\n");
    }
    else if(age == 0){
        printf("You are a baby.\n");
    }
    else{
        printf("YOU ARE NOOB!\n");
    }
    return 0;
}
