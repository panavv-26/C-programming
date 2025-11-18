#include <stdio.h>

int main() {
    int spoint, epoint;

    printf("Enter starting point: ");
    scanf("%d", &spoint);

    printf("Enter ending point: ");
    scanf("%d", &epoint);

    // If spoint is odd, move it to the next even number
    if (spoint % 2 != 0) {
        spoint++;
    }

    printf("Even numbers between given range:\n");
    for (int i = spoint; i <= epoint; i += 2) {
        printf("%d\n", i);
    }

    return 0;
}
