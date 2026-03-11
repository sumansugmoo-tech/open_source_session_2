#include <stdio.h>

int calculateAverage(int studentMarks[], int studentCount)
{
    int i;
    int sum = 0;

    if(studentCount == 0)
    {
        return 0;
    }

    for(i = 0; i < studentCount; i++)
    {
        sum = sum + studentMarks[i];
    }

    return sum / studentCount;
}

int main()
{
    int marks[100];
    int studentCount = 0;
    int i;

    printf("Enter number of students: ");
    scanf("%d", &studentCount);

    for(i = 0; i < studentCount; i++)
    {
        printf("Enter marks: ");
        scanf("%d", &marks[i]);
    }

    int average = calculateAverage(marks, studentCount);

    printf("Average marks: %d\n", average);

    return 0;
}
