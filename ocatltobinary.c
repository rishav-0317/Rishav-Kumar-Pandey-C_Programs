#include<stdio.h>
void main()
{
    int n;
    printf("Enter a octal number: ");
    scanf("%d",&n);
    int binary[32],i=0;
    while(n>0)
    {
        int digits=n%10;
        for(int j=0;j<3;j++)
        {
            binary[i]=digits%2;
            digits=digits/2;
            i++;
        }
        n=n/10;
    }
    printf("Binary equivalent: ");
    for(int k=i-1;k>=0;k--)
    {
        printf("%d",binary[k]);
    }
}