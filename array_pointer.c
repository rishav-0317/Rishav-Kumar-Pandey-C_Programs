#include<stdio.h>
void main()
{
    int arr[5]={10,20,30,40,50};
    int *ptr=arr; // or int *ptr=&arr[0];
    printf("Elements of the array are: \n");
    for(int i=0;i<5;i++)
    {
        printf("%d ", *ptr);
        ptr++;
    }
}