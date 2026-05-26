#include <stdio.h>

int main()
{
    int a, b, temp;
    int *x = &a;
    int *y = &b;
    int *t = &temp;

    printf("Enter two numbers: ");
    if (scanf("%d %d", x, y) != 2)
    {
        printf("Invalid input\n");
        return 1;
    }

    *t = *x;
    *x = *y;
    *y = *t;

    printf("After swapping: %d %d\n", *x, *y);
    return 0;
}
