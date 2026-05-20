//Nth prime number.
#include<stdio.h>
void main()
{
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    int count=0,num=1;
    while(count<n)
    {
        num++;
        int isPrime=1;
        for(int i=2;i<=num/2;i++)
        {
            if(num%i==0)
            {
                isPrime=0;
                break;
            }
        }
        if(isPrime)
        {
            count++;
        }
    }
    printf("The %dth prime number is: %d", n, num);
}