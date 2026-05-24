#include<stdio.h>
void main()
{
    int n;
    printf("Enter a decimal number: ");
    scanf("%d",&n);
    char hexadecimal[32];
    int i=0;
    while(n>0)
    {
        int rem=n%16;
        if(rem<10)
        {
            hexadecimal[i]=rem+48; // Convert to ASCII
        }
        else
        {
            hexadecimal[i]=rem+55; // Convert to ASCII for A-F
        }
        n=n/16;
        i++;
    }
    printf("Hexadecimal equivalent: ");
    for(int j=i-1;j>=0;j--)
    {
        printf("%c",hexadecimal[j]);
    }
}