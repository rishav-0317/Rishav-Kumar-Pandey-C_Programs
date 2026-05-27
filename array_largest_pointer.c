#include<stdio.h>
int main()
{
    int arr[5]={10,20,30,40,50};
    int *ptr=arr; // or int *ptr=&arr[0];
    int largest=*ptr; // Initialize largest with the first element of the array
    for(int i=1;i<5;i++)
    {
        ptr++; // Move to the next element
        if(*ptr > largest) // Compare the current element with largest
        {
            largest = *ptr; // Update largest if current element is greater
        }
    }
    printf("Largest element in the array is: %d\n", largest);
    return 0;
}