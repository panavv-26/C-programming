//write a program to sum all elements in an array
#include <stdio.h>
int main (){
    int n, i;
    int arr[100];
    int sum = 0;

    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    printf("Enter %d elements in array: \n", n);
    for(i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i=0; i<n; i++) {
        sum += arr[i];
    }

    printf("Sum of all elements in the array: %d\n", sum);

    return 0;
}