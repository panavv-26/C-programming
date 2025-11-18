// Write a program to count event and odd numbers in an array
// and then i want that all the even nos. go to other array and all odd nos. go to another array
#include <stdio.h>
int main (){
    int n, i;
    int arr[100];
    int evenArr[100], oddArr[100];
    int evenCount = 0, oddCount = 0;

    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    printf("Enter %d elements in array: \n", n);
    for(i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i=0; i<n; i++) {
        if(arr[i] % 2 == 0) {
            evenArr[evenCount++] = arr[i]; // Add to even array
        } else {
            oddArr[oddCount++] = arr[i];   // Add to odd array
        }
    }

    printf("Even numbers (%d): \n", evenCount);
    for(i=0; i<evenCount; i++) {
        printf("%d ", evenArr[i]);
    }
    printf("\n");

    printf("Odd numbers (%d): \n", oddCount);
    for(i=0; i<oddCount; i++) {
        printf("%d ", oddArr[i]);
    }
    printf("\n");

    return 0;
}