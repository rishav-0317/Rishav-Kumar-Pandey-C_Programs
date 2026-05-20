#include<stdio.h>
int main()
{
    int a,b,c,d,l;
    printf("Enter four numbers: ");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(a>b && a>c && a>d){
        l=a;
    }
    else if(b>a && b>c && b>d){
        l=b;
    }
    else if(c>a && c>b && c>d){
        l=c;
    }
    else{
        l=d;
    }
    printf("Largest: %d\n", l);
    return 0;
}