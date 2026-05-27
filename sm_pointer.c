#include<stdio.h>
int main()
{
    int arr[5]={10,2,3,8,20};
    int *p1=arr;
    int *smallest=p1;
    for(int i=1;i<5;i++)
    {
        p1++;
        if(*p1<*smallest)
        {
            smallest=p1;
        }
    }
    printf("Smallest element in the array is: %d\n", *smallest);
    return 0;
}