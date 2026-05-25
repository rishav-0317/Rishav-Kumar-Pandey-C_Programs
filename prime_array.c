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
    for(int i=0;i<n;i++)
    {
        for(int j=2;j<arr[i];j++)
        {
            if(arr[i]%j==0)
            {
                printf("%d ", arr[i]);
            }
        }
    }
}