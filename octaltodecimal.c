#include<stdio.h>
#include<math.h>
void main()
{
    int n;
    printf("Enter an octal number: ");
    scanf("%d",&n);
    int decimal=0,i=0;
    while(n>0)
    {
        int digits=n%10;
        decimal=decimal+digits*pow(8,i);
        n=n/10;
        i++;
    }
    for(int j=i-1;j>=0;j--)
    {
        printf("%d",decimal);
    }
}