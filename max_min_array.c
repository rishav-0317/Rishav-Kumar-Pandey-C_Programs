#include<stdio.h>
void main()
{
    int arr[100],n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int max=arr[0];
    int min=arr[0];
    for(int i=1; i<n; i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    printf("The maximum element in the array is: %d\n", max);
    printf("The minimum element in the array is: %d\n", min);
}