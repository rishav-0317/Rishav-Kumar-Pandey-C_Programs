#include<stdio.h>
void main()
{
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]", str);
    for(int i=0; str[i]!='\0'; i++)
    {
        printf("%c ", str[i]);
    }
    printf("\n");
}