#include <stdio.h>

void findMinMax(int arr[], int n)
{
    int i;
    int min = arr[0],max=min;

    for(i = 1; i < n; i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
        }
         if(arr[i] > max)
        {
            max = arr[i];
        }
        
    }

    printf("Max: %d\n", max);
    printf("Min: %d\n", min);
    return;
}

int main(void)
{
    int arr[5] = {60, 70, 80, 90, 50};
    findMinMax(arr, 5);

    return 0;
}
