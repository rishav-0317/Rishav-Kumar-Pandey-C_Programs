#include<stdio.h>
void main()
{
    int arr[100];
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int sum = 0;
    for(int i=0; i<n; i++)
    {
        sum += arr[i];
    }
    printf("The sum of the elements in the array is: %d", sum);
}