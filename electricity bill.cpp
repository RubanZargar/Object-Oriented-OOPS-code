#include <stdio.h>

int main() {
    int unitsConsumed;
    double ratePerUnit = 0.15, billAmount;

    
    printf("Enter the units of electricity consumed: ");
    scanf("%d", &unitsConsumed);

   
    billAmount = unitsConsumed * ratePerUnit;

    
    printf("Your electricity bill is: $%.2lf\n", billAmount);

    return 0;
}

