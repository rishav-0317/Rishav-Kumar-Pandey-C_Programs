#include<stdio.h>
int square(int x);
int main()
{
    int num;
    printf("Enter a numebr: ");
    scanf("%d",&num);
    int result = square(num);
    printf("The square of %d is %d.\n", num, result);
    return 0;
}
int square(int x)
{
    return x*x;
}