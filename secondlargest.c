#include<stdio.h>
int main()
{
    int a,b,c,largest,secondlargest;
    printf("Enter three numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c){
        largest=a;
        if(b>c){
            secondlargest=b;
        }
        else{
            secondlargest=c;
        }
    }
    else if(b>a && b>c){
        largest=b;
        if(a>c){
            secondlargest=a;
        }
        else{
            secondlargest=c;
        }
    }
    else{
        largest=c;
        if(a>b){
            secondlargest=a;
        }
        else{
            secondlargest=b;
        }
    }
    printf("Second Largest: %d\n", secondlargest);
    return 0;
}