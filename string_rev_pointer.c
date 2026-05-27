#include<stdio.h>
#include<string.h>
int main()
{
    char str[]="Hello, World!";
    char *ptr=str+strlen(str)-1; // Point to the last character of the string
    printf("Reversed string is: ");
    while(ptr >= str) // Loop until the pointer reaches the beginning of the string
    {
        printf("%c", *ptr); // Print the current character
        ptr--; // Move to the previous character
    }
    return 0;
    
}