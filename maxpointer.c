#include<stdio.h>
int main()
{
    int a,b;
    int *p1,*p2;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    p1 = &a;
    p2 = &b;
    if(*p1 > *p2)
    {
        printf("The maximum number is: %d\n", *p1);
    }
    else if(*p2 > *p1)
    {
        printf("The maximum number is: %d\n", *p2);
    }
    else
    {
        printf("Both numbers are equal: %d\n", *p1);
    }
    return 0;
}