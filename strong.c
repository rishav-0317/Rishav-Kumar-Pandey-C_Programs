#include<stdio.h>
void main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int sum=0;
    int temp=n;
    while(temp>0)
    {
        int digits=temp%10;
        int fact=1;
        for(int i=1;i<=digits;i++)
        {
            fact=fact*i;
        }
        sum=sum+fact;
        temp=temp/10;
    }
    if(sum==n)
    {
        printf("%d is a strong number",n);
    }
    else
    {
        printf("%d is not a strong number",n);
    }
}