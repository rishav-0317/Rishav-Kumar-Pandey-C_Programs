#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr = NULL; // Initialize pointer to NULL
    printf("Enter a number: ");
    scanf("%d", ptr); // Attempting to read input into a NULL pointer (undefined behavior)
    printf("You entered: %d\n", *ptr); // Attempting to dereference a NULL pointer (undefined behavior)
    printf("ptr=%p\n", (void*)ptr); // Print the value of the pointer (should be NULL)
    return 0;
}