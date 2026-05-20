#include<stdio.h>
#include<math.h>
int main()
{
    int n,squares=1;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Perfect squares less than %d are: ",n);
    for(int i=1;i<=n;i++)
    {
        int root=sqrt(i);
        if(root*root==i)
        {
            printf("%d ",i);
        }
    }
    return 0;
}