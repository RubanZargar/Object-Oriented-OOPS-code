#include <stdio.h>

int main() {
    int n;
    printf("Enter number of employees: ");
    scanf("%d", &n);

    int id;
    double rate, hours, gross, net, total = 0;
    double tax_rate = 0.03625;

    printf("\nEmployee Payroll Processing:\n");
    printf("------------------------------------\n");

    for (int i = 1; i <= n; i++) {
        printf("\nEnter details for employee %d\n", i);
        printf("ID: ");
        scanf("%d", &id);
        printf("Hourly Rate: ");
        scanf("%lf", &rate);
        printf("Hours Worked: ");
        scanf("%lf", &hours);

       
        if (hours > 40)
            gross = (40 * rate) + (hours - 40) * (rate * 1.5);
        else
            gross = hours * rate;

      
        net = gross - (gross * tax_rate);

        
        total += net;

        printf("Employee ID: %d | Net Pay: %.2lf\n", id, net);
    }

    printf("\n------------------------------------\n");
    printf("Total Payroll: %.2lf\n", total);
    printf("Average Pay: %.2lf\n", total / n);

    return 0;
}
