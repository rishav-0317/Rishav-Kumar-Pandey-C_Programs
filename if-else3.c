#include<stdio.h>
int main()
{
    int c=0, n,i,new;
    printf("Enter a number of cups: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i%6==0){
            c=c+1;
        }

    }
    new= n+c;
    printf("no of cups: %d",new);
    return 0;
}