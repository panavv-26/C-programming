//write a program to delete an element from the array at a given position
#include <stdio.h>
int main (){
    int n, position, i;
    int arr[100];
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    printf("Enter %d elements in array: \n", n);
    for(i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the position of the element to delete: ");
    scanf("%d", &position);
    if(position < 1 || position > n) {
        printf("Invalid position!\n");
        return 1;
    }
    for(i=position-1; i<n-1; i++) { // SHIFT ELEMENTS TO THE LEFT
        arr[i] = arr[i+1];
    }
    n--; // DECREASE SIZE OF ARRAY
    printf("Array after deletion: \n");
    for(i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}