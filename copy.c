#include<stdio.h>
void main()
{
    int arr[20],arr1[20],n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<n; i++)
    {
        arr1[i] = arr[i];
    }
    for(int i=0; i<n; i++)
    {
        printf("%d ", arr1[i]);
    }
}