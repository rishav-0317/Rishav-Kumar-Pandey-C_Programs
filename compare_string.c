#include<stdio.h>
int main()
{
    char str1[]="Hello, World!";
    char str2[]="Hello, World!";
    char *ptr1=str1;
    char *ptr2=str2;
    while(*ptr1 != '\0' && *ptr2 != '\0')
    {
        if(*ptr1 != *ptr2)
        {
            printf("Strings are not equal.\n");
            return 0;
        }
        ptr1++;
        ptr2++;
    }
    if(*ptr1 == '\0' && *ptr2 == '\0')
    {
        printf("Strings are equal.\n");
    }
    else
    {
        printf("Strings are not equal.\n");
    }
    return 0;
}