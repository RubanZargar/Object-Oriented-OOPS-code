#include <stdio.h>

int main() {
    int n;
    printf("Enter number of subjects: ");
    scanf("%d", &n);
    double marks, sum = 0;
    for(int i=1; i<=n; i++) {
        printf("Enter marks for subject %d: ", i);
        scanf("%lf", &marks);
        sum += marks;
    }
    double gpa = sum/n;
    printf("Your GPA/CGPA: %.2lf\n", gpa);
    return 0;
}
