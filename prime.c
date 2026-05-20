//Print all the prime numbers between 1 and n.
#include<stdio.h>
void main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("The prime numbers between 1 and %d are:\n",n);
    for(int i=2;i<=n;i++)
    {
        int count=0;
        for(int j=2;j<=i;j++)
        {
            if(i%j==0)
            {
                count++;
            }
        }
        if(count==1)
        {
            printf("%d ",i);
        }
    }
}