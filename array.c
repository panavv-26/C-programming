#include <stdio.h>
#define max_size 100
int main () {
    int a[10]; //array name a, type int, size 100
    int size; int i;
    printf("Enter the value of elements, you want to insert in array: ");
    scanf("%d", &size);
    printf("Enter the %d elements of array: \n", size);
    for(i=0; i<size; i++) {
        scanf("%d", &a[i]);
    }
    printf("The elements in the array are: \n");
    for(i=0; i<size; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}  