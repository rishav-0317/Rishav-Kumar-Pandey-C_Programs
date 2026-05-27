#include<stdio.h>
int main()
{
    int *ptr; // Declare a pointer without initializing it (wild pointer)
    printf("ptr=%p\n", (void*)ptr); // Print the value of the pointer (may contain garbage value)
    return 0;
}