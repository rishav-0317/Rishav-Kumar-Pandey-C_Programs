//5
//45
//345
//2345
//12345
#include<stdio.h>
void main()
{
    int n=5;
    for(int i=5;i>=1;i--)
    {
        for(int j=i;j<=5;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}