#include<stdio.h>
int sum(int n);
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int result = sum(num);
    printf("The sum of the first %d natural numbers is %d.\n", num, result);
    return 0;

}
int sum(int n)
{
    if(n == 0)
        return 0;
    else
        return n+sum(n-1);
}