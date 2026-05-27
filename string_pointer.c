#include<stdio.h>
int main()
{
    char str[]="Hello, World!";
    char *ptr=str; // Point to the first character of the string
    int length=0;
    while(*ptr != '\0') // Loop until the null terminator is reached
    {
        length++; // Increment the length for each character
        ptr++; // Move to the next character
    }
    printf("Length of the string is: %d\n", length);
    return 0;
    
}