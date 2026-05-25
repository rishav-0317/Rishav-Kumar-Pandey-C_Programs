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
                break;
            }
        }
        if(arr[i]==2 || arr[i]==3)
        {
            printf("%d is a prime number.\n", arr[i]);
        }
        else if(arr[i]%2!=0 && arr[i]%3!=0)
        {
            printf("%d is a prime number.\n", arr[i]);
        }
    }
}