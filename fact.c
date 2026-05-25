#include<stdio.h>
int fact(int n);
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int result = fact(num);
    printf("The factorial of %d is %d.\n", num, result);
    return 0;
}
int fact(int n)
{
    if(n == 0)
        return 1;
    else
        return n*fact(n-1);
}