//1
//23
//456
//78910
#include<stdio.h>
void main()
{
    int n=4;
    int count=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d",count);
            count++;
        }
        printf("\n");
    }
}