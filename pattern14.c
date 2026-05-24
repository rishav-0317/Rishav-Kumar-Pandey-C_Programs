//1
//24
//135
//2468
//13579
#include <stdio.h>
void main()
{
    int n = 5;

    for (int i = 1; i <= n; i++)
    {
        int num;
        if (i % 2 == 0)
        {
            num = 2;
        }
        else
        {
            num = 1;
        }
        for (int j = 1; j <= i; j++)
        {
            printf("%d", num);
            num += 2;
        }
        printf("\n");
    }
}