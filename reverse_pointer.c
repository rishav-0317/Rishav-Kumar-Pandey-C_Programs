#include<stdio.h>
int main()
{
    int arr[5]={10,20,30,40,50};
    int *ptr=arr+4; // Point to the last element of the array
    printf("Elements of the array in reverse order are: \n");
    for(int i=0;i<5;i++)
    {
        printf("%d ", *ptr); // Print the current element
        ptr--; // Move to the previous element
    }
    return 0;
}