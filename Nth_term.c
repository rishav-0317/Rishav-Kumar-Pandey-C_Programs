//1,2,1,3,2,5,3,7,5,11,8,13,17......
#include<stdio.h>
void main()
{
    int n;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    int a=0,b=1,c;
    for(int i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            printf("%d ",b);
            c=a+b;
            a=b;
            b=c;
        }
        else{
            int k=i/2;
            int count=0;
            int num=2;
            int result=0;
            while(count<k)
            {
                int is_prime=1;
                for(int j=2;j<=num/2;j++)
                {
                    if(num%j==0)
                    {
                        is_prime=0;
                        break;
                    }
                }
                if(is_prime)
                {
                    result=num;
                    count++;
                }
                num++;
            }
            printf("%d ",result);
        }
    }
}