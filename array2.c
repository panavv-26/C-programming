#include <stdio.h>
int main (){
    // to insert elemts into array with their positions
    int n, position, i, value;
    int arr[100];
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    printf("Enter %d elements in array: \n", n);
    for(i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the position where you want to insert the element: ");
    scanf("%d", &position);
    printf("Enter the value to insert: ");
    scanf("%d", &value);
    for(i=n; i>=position; i--) {// MAKE SPACE FOR NEW ELEMENT
        arr[i] = arr[i-1];
    }
    arr[position-1] = value;
    n++;
    printf("Array after insertion: \n");
    for(i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
    //IT FOLLOWS INDEXING THEREFORE TO INSERT AT POSITION 3, WE HAVE TO INSERT AT INDEX 2, THAT'S WHY i = n; i>=position; i-- is used.
}