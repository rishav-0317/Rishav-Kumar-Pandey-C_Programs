#include<stdio.h>
void main()
{
    int arr1[20][20],arr2[20][20],n1,n2,sum[40][40];
    printf("Enter the number of elements in the first array: ");
    scanf("%d", &n1);
    printf("Enter the number of elements in the second array: ");
    scanf("%d", &n2);
    printf("Enter the elements of the first array: ");
    for(int i=0; i<n1; i++)
    {
        for(int j=0; j<n1; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("Enter the elements of the second array: ");
    for(int i=0; i<n2; i++)
    {
        for(int j=0; j<n2; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }
    printf("The sum of the two arrays is: \n");
    for(int i=0; i<n1; i++)
    {
        for(int j=0; j<n1; j++)
        {
            sum[i][j] = arr1[i][j] + arr2[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
}