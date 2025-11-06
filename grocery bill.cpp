#include <stdio.h>

int main() {
    int numItems;
    double price, totalBill = 0.0;

    
    printf("Enter the number of items: ");
    scanf("%d", &numItems);

    
    for (int i = 1; i <= numItems; i++) {
        printf("Enter the price of item %d: $", i);
        scanf("%lf", &price);
        totalBill += price; 
    }

    
    printf("\nTotal bill: $%.2lf\n", totalBill);

    return 0;
}

