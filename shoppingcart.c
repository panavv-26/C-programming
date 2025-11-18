#include <stdio.h>
#include <string.h>

int main() {
    // Shopping cart variables
    char item[50] = "";
    float price = 0.0f;
    int quantity = 0;
    char currency = '$';
    float total = 0.0f;

    // Input item details
    printf("What item are you purchasing?\n");
    fgets(item, sizeof(item), stdin);
    item[strlen(item) - 1] = 0; // Remove newline character if present

    printf("Enter the price for each item:\n");
    scanf("%f", &price);

    printf("How many items are you purchasing?\n");
    scanf("%d", &quantity);

    // Calculate total
    total = price * quantity;


    // Output the shopping cart summary
    printf("You are purchasing %d of %s at %.2f%c each.\n", quantity, item, price, currency);
    printf("Total cost: %.2f%c\n", total, currency);

    return 0;
}
