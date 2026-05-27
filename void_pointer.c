#include<stdio.h>
int main()
{
    void *ptr; // Declare a void pointer
    int num = 42; // An integer variable
    ptr = &num; // Assign the address of num to the void pointer
    printf("Value of num: %d\n", *(int*)ptr);
    char c='A';
    ptr=&c; // Now the void pointer points to a char variable
    printf("Value of c: %c\n", *(char*)ptr);
    return 0;

}