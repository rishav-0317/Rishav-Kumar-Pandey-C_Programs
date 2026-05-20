#include<stdio.h>
void main()
{
    int n,digits,rev=0,temp;
    printf("Enter a number: ");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        digits=n%10;
        rev=rev*10+digits;
        n=n/10;
    }
    if(temp==rev)
    {
        printf("The number is a palindrome.");
    }
    else
    {
        printf("The number is not a palindrome.");
    }
}