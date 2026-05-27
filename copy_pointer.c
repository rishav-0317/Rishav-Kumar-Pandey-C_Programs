#include<stdio.h>
int main()
{
    int arr[5]={5,6,2,8,1},arr2[5];
    int *ptr1=arr;
    int *ptr2=arr2;
    for(int i=0;i<5;i++)
    {
        *ptr2=*ptr1; // Copy the value pointed by ptr1 to the location pointed by ptr2
        ptr1++; // Move to the next element in arr
        ptr2++; // Move to the next element in arr2

    }
    printf("Elements of the copied array are: \n");
    for(int i=0;i<5;i++)
    {
        printf("%d ", arr2[i]); // Print the elements of the copied array
    }
    return 0;
}