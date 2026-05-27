#include<stdio.h>
int main()
{
    int n,t1=0,t2=1,next;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    int *ptr1=&t1;
    int *ptr2=&t2;
    printf("Fibonacci Series: ");
    for(int i=1;i<=n;i++)
    {
        printf("%d ", *ptr1); // Print the current term
        next = *ptr1 + *ptr2; // Calculate the next term
        *ptr1 = *ptr2; // Update ptr1 to point to the next term
        *ptr2 = next; // Update ptr2 to point to the new next term
    }
    return 0;
    
}