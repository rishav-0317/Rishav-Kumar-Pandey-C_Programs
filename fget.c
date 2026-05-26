#include<stdio.h>
void main()
{
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    printf("The string you entered is: %s", str);
    
}