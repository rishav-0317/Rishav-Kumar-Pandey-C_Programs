#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int cube_root=cbrt(i);
        if(cube_root*cube_root*cube_root==i)
        {
            printf("%d ",i);
        }
    }
    return 0;
}