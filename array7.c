//to  include 2d array and applying sum of each row and each column
#include <stdio.h>
int main() {
    int rows, cols;
    int arr[100][100];
    int i, j;
    int rowSum[100] = {0};
    int colSum[100] = {0};

    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    printf("Enter elements of the array:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Calculate sum of each row and each column
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            rowSum[i] += arr[i][j];
            colSum[j] += arr[i][j];
        }
    }

    // Print the sums of each row
    printf("Sum of each row:\n");
    for(i = 0; i < rows; i++) {
        printf("Row %d: %d\n", i + 1, rowSum[i]);
    }

    // Print the sums of each column
    printf("Sum of each column:\n");
    for(j = 0; j < cols; j++) {
        printf("Column %d: %d\n", j + 1, colSum[j]);
    }

    return 0;
}