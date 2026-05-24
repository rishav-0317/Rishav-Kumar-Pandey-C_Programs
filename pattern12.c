#include<stdio.h>
void main()
{
    int n=5;
    for(int i=1;i<=n;i++)
    {
        for(int j=i;j<=5;j++)
        {
            printf("%c",j+64);
        }
        printf("\n");
    }
}