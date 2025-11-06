#include <stdio.h>

void categorize_temperatures(int temps[], int size) {
    int hot_days = 0, pleasant_days = 0, cold_days = 0;

    
    for (int i = 0; i < size; i++) {
        if (temps[i] >= 85) {
            printf("Temperature %d°F: Hot Day\n", temps[i]);
            hot_days++;
        } else if (temps[i] >= 60 && temps[i] <= 84) {
            printf("Temperature %d°F: Pleasant Day\n", temps[i]);
            pleasant_days++;
        } else {
            printf("Temperature %d°F: Cold Day\n", temps[i]);
            cold_days++;
        }
    }

   
    printf("\nSummary of the temperatures:\n");
    printf("Number of Hot Days: %d\n", hot_days);
    printf("Number of Pleasant Days: %d\n", pleasant_days);
    printf("Number of Cold Days: %d\n", cold_days);
}

int main() {
    
    int daily_temperatures[] = {55, 62, 68, 74, 59, 45, 41, 58, 60, 67, 65, 78, 82, 88, 91, 92, 90, 93, 87, 80, 78, 79, 72, 68, 61, 59};
    int size = sizeof(daily_temperatures) / sizeof(daily_temperatures[0]);

  
    categorize_temperatures(daily_temperatures, size);

    return 0;
}

