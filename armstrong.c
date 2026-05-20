#include<stdio.h>
#include<math.h>
void main()
{
    int sum=0,n,digits,no_digits,temp;
    printf("Enter a number: ");
    scanf("%d",&n);
    temp=n;
    no_digits=log(n)/log(10)+1;//for no of digits
    while(n>0)
    {
        digits=n%10;
        sum=sum+pow(digits,no_digits);
        n=n/10;
    }
    if(temp==sum)
    {
        printf("The number is an Armstrong number.");
    }
    else
    {
        printf("The number is not an Armstrong number.");
    }
}