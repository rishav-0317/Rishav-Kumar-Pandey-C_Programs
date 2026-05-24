#include<stdio.h>
#include<math.h>
int special(int n);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(special(n) == n)
    {
        printf("%d is a special number.\n", n);
    }
    else
    {
        printf("%d is not a special number.\n", n);
    }
    return 0;
}
int special(int n)
{
    int temp = n;
    int sum = 0;
    int i=0;
    while(temp > 0)
    {
        int digit = temp % 10;
        sum += pow(digit, i);
        temp /= 10;
        i++;
    }

    return sum;
}