#include<stdio.h>
int even(int num);
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(even(num) == 1)
    {
        printf("%d is an even number.\n", num);
    }
    else
    {
        printf("%d is an odd number.\n", num);
    }
    return 0;
}
int even(int num)
{
    if(num%2==0)
    {
        return 1;

    }
    else
    {
        return 0;
    }
}