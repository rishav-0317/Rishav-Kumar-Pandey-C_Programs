//A
//AB
//ABC
//ABCD
//ABCDE
#include<stdio.h>
void main()
{
    int n=5;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%c",j+64);
        }
        printf("\n");
    }
}