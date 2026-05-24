#include<stdio.h>
void main()
{
    int n;
    printf("Enter a decimal number: ");
    scanf("%d",&n);
    int octal[32],i=0;
    while(n>0)
    {
        octal[i]=n%8;
        n=n/8;
        i++;
    }
    
    printf("Octal equivalent: ");
    for(int j=i-1;j>=0;j--)
    {
        printf("%d",octal[j]);
    }
}