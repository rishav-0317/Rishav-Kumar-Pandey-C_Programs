//0,0,2,1,4,2,6,3,8,4,10,5,12......
#include<stdio.h>
void main()
{
    int n;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            printf("%d ",(i-1));
        }
        else{
            printf("%d ",(i/2)-1);
        }
    }
}