#include<stdio.h>
void main()
{
    int n,reverse=0,digits;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n>0)
    {
        digits=n%10;
        reverse=reverse*10+digits;
        n=n/10;
    }
    printf("The reversed number is: %d",reverse);
}