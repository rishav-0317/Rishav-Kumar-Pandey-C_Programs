#include<stdio.h>
void main()
{
    int arr1[100],arr2[100],n1,n2;
    printf("Enter the number of elements in the first array: ");
    scanf("%d", &n1);
    printf("Enter the elements of the first array: ");
    for(int i=0; i<n1; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("Enter the number of elements in the second array: ");
    scanf("%d", &n2);
    printf("Enter the elements of the second array: ");
    for(int i=0; i<n2; i++)
    {
        scanf("%d", &arr2[i]);
    }
    printf("The intersection of the two arrays is: ");
    for(int i=0; i<n1; i++)
    {
        for(int j=0; j<n2; j++)
        {
            if(arr1[i]==arr2[j])
            {
                printf("%d ", arr1[i]);
                break;
            }
        }
    }
    printf("\n");
    

}