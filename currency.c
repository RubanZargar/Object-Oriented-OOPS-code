#include <stdio.h>

int main() {
    float usd, inr;
    printf("Enter amount in USD: ");
    scanf("%f", &usd);

    inr = usd * 87.0; // approx conversion
    printf("%.2f USD = %.2f INR\n", usd, inr);
    return 0;
}
