#include<stdio.h>
int difference(int a);
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    int result = difference(a);
    if(result==0){
        printf("Balanced number");
    }
    else{
        printf("Not a balanced number");
    }
    return 0;
}
int difference(int a)
{
    int sum_even = 0;
    int sum_odd = 0;
    int temp = a;
    int diff = 0;
    while(temp > 0)
    {
        int digit = temp % 10;
        if(digit % 2 == 0)
        {
            sum_even += digit;
        }
        else
        {
            sum_odd += digit;
        }
        temp /= 10;
    }
    diff = sum_even - sum_odd;
    return diff;
}