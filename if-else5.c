#include<stdio.h>
void main()
{
    int n,d,total_canteens,remaining=0;
    printf("Enter a total distance in km: ");
    scanf("%d",&d);
    printf("Enter a capacity of canteen: ");
    scanf("%d",&n);
    total_canteens=d*250;
    if(n==total_canteens)
    {
        printf("Yes");
    }
    else
    {
        remaining=total_canteens-n;
        printf("No\n");
        printf("Remaining canteens: %d",remaining);
    }
}