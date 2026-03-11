#include <stdio.h>

int main()
{
    int n;
    int marks[100];
    int i;

    // 1. Validate the number of students
    // We check if n is between 1 and 100 (the limit of our array)
    do {
        printf("Enter number of students (1-100): ");
        if (scanf("%d", &n) != 1) {
            printf("Invalid input. Please enter a number.\n");
            while(getchar() != '\n'); // Clear the input buffer
            n = 0; 
        } else if (n <= 0 || n > 100) {
            printf("Error: Please enter a value between 1 and 100.\n");
        }
    } while (n <= 0 || n > 100);

    for(i = 0; i < n; i++)
    {
        // 2. Validate individual marks
        // Assuming marks must be between 0 and 100
        do {
            printf("Enter marks for student %d (0-100): ", i + 1);
            if (scanf("%d", &marks[i]) != 1) {
                printf("Invalid input. Please enter a number.\n");
                while(getchar() != '\n'); 
                marks[i] = -1; // Force loop to repeat
            } else if (marks[i] < 0 || marks[i] > 100) {
                printf("Error: Marks must be between 0 and 100.\n");
            }
        } while (marks[i] < 0 || marks[i] > 100);
    }

    int sum = 0;
    for(i = 0; i < n; i++)
    {
        sum = sum + marks[i];
    }

    // 3. Use float for average for better precision
    float avg = (float)sum / n;

    printf("Average marks: %.2f\n", avg);

    return 0;
}}
