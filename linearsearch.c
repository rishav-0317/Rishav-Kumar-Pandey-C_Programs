#include<stdio.h>
void main()
{
    int arr[20],n,key,flag=0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to be searched: ");
    scanf("%d", &key);
    for(int i=0; i<n; i++)
    {
        if(arr[i]==key)
        {
            printf("Element found at index %d\n", i);
            flag = 1;
            break;
        }
    }
    if(flag==0)
    {
        printf("Element not found in the array\n");
    }
    
}