#include<stdio.h>
void main()
{
    double arr[100],n,sum=0,mean;
    printf("Enter the number of elements in the array: ");
    scanf("%lf", &n);
    printf("Enter the elements of the array: ");
    for(int i=0; i<n; i++)
    {
        scanf("%lf", &arr[i]);
        sum += arr[i];
    }
    mean = sum/n;
    printf("The mean of the array is: %lf", mean);
}