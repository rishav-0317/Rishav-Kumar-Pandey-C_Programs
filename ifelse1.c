#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n>=90)
    {
        printf("Grade: A");
    }
    else if(n>=80)
    {
        printf("Grade: B");
    }
    else if(n>=70)
    {
        printf("Grade: C");
    }
    else if(n>=60)
    {
        printf("Grade: D");
    }
    else
    {
        printf("Grade: F");
    }
    return 0;
}