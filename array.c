#include<stdio.h>
void main()
{
    int arr[5];
    printf("Enter 5 numbers: ");
    for(int i=0; i<5; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("The numbers you entered are: ");
    for(int i=0; i<5; i++)
    {
        printf("%d ", arr[i]);
    }
}