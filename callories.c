#include <stdio.h>

int main() {
    int n;
    char food[20];
    int cal, total = 0;

    printf("Number of items eaten today: ");
    scanf("%d", &n);

    for (int i=0; i<n; i++) {
        printf("Enter food %d: ", i+1);
        scanf("%s", food);
        printf("Enter calories: ");
        scanf("%d", &cal);
        total += cal;
    }

    printf("Total Calories: %d\n", total);
    return 0;
}
