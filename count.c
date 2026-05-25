#include<stdio.h>
int count(int n)
{
    if(n == 0)
        return 0;
    else
        return 1 + count(n-1);

}
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int result = count(num);
    printf("The count of digits in %d is %d.\n", num, result);
    return 0;
}