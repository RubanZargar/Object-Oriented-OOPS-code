#include <stdio.h>

int main() {
    double m, v;
    printf("Enter mass (kg) and velocity (m/s): ");
    scanf("%lf %lf", &m, &v);
    printf("Momentum: %.2lf kg·m/s\n", m*v);
    return 0;
}

