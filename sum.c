#include<stdio.h>
#include<math.h>
void main()
{
    int sum,n,digits,no_digits;
    printf("Enter a number: ");
    scanf("%d",&n);
    no_digits=log(n)/log(10)+1;//for no of digits
    while(n>=10)
    {
        sum=0;
        while(n>0)
        {
            digits=n%10;
            sum=sum+digits;
            n=n/10;
        }
        n=sum;
    }
    printf("The sum of the digits is: %d",n);
    printf("\nThe number of digits is: %d",no_digits);

}