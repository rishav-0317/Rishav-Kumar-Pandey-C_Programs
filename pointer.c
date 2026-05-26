#include<stdio.h>
int main()
{
    int x=10;
    int *ptr = &x;
    printf("The value of x is: %d\n", x);
    printf("Address of x is: %p\n", (void*)&x);
    printf("Value pointed to by ptr is: %d\n", *ptr);
    printf("Address stored in ptr is: %p\n", (void*)ptr);
    return 0;
}