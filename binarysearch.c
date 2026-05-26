#include<stdio.h>
int main()
{
    int arr[20],n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to be searched: ");
    int key;
    scanf("%d", &key);
    int low = 0, high = n-1, mid;
    while(low<=high)
    {
        mid = (low+high)/2;
        if(arr[mid]==key)
        {
            printf("Element found at index %d\n", mid);
            return 0;
        }
        else if(arr[mid]<key)
        {
            low = mid+1;
        }
        else
        {
            high = mid-1;
        }
    }

    printf("Element not found\n");
    return 0;
}
