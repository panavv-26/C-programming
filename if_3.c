#include <stdio.h>
#include <stdbool.h>
int main(){
    char name[50];
    printf("Enter your name:\n");
    fgets(name, sizeof(name), stdin);
    if (strlen(name)==0){
        printf("You didn't enter a name!\n");
    }
    else if (strlen(name)<3){
        printf("Name is too short!\n");
    }
    else if (strlen(name)>30){
        printf("Name is too long!\n");
    }
    else{
        printf("Hello, %s", name);
    }
    
    return 0;
}
