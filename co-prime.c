#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    for(int i=2;i<=a && i<=b;i++)
    {
        if(a%i==0 && b%i==0)
        {
            printf("%d and %d are not co-prime numbers.",a,b);
            return;
        }
    }
    printf("%d and %d are co-prime numbers.",a,b);  
    
}