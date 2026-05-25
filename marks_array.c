#include<stdio.h>
void main()
{
    int marks[100],n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    printf("Enter the marks of the students: ");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &marks[i]);
    }
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(marks[i]>80)
        {
            count++;
        }
    }
    printf("Number of students with marks greater than 80: %d\n", count);
}