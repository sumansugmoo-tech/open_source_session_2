/*
Hint for students

The program assumes all input is valid.
Add validation checks.*/

#include <stdio.h>

int main()
{
    int n;
    int marks[100];
    int i,flag =0;

    printf("Enter number of students: ");
    if(scanf("%d", &n) != 1) return 0;

    for(i = 0; i < n; i++)
    {
        printf("Enter marks: ");
        scanf("%d", &marks[i]);
        if(0>=marks[i] != marks[i]>=100){
          printf("%d is invalid",marks[i]);}
          flag=1;
          break;
    }
if(flag!=1){
    int sum = 0,avg;

    for(i = 0; i < n; i++)
    {
        sum = sum + marks[i];
    }
    if(n!=0){
    avg = sum / n;
        
    printf("Average marks: %d\n", avg);
    }
    else{
      printf("number of students can't be zero");
        
    }

}
    return 0;
}
