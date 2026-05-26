#include<stdio.h>
void main()
{
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]", str);
    printf("The string you entered is: %s\n", str);
}