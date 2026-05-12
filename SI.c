#include<stdio.h>
int main()
{
    float p,r,t;
    float si;
    printf("Enter the principal amount, rate of interest and time in years: ");
    scanf("%d %d %d",&p,&r,&t);
    si = (p*r*t)/100.0;
    printf("Simple Interest = %.2f",si);
    return 0;
}