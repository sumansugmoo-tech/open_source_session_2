#include <stdio.h>

void calculateStats(int marks[], int n, int *sum, int *max, int *min) {
    *sum = 0;
    *max = marks[0];
    *min = marks[0];

    for (int i = 0; i < n; i++) {
        *sum += marks[i];
        
        if (marks[i] > *max) {
            *max = marks[i];
        }
        
        if (marks[i] < *min) {
            *min = marks[i];
        }
    }
}

int main() {
    int n;
    int marks[100];
    int sum, max, min;

    printf("Enter number of students (1-100): ");
    if (scanf("%d", &n) != 1 || n <= 0 || n > 100) {
        printf("Invalid input.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Enter marks for student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    calculateStats(marks, n, &sum, &max, &min);

    float avg = (float)sum / n;

    printf("\n--- Results ---\n");
    printf("Average: %.2f\n", avg);
    printf("Max: %d\n", max);
    printf("Min: %d\n", min);

    return 0;
}
