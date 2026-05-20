#include<stdio.h>
int main()
{
    int a,b,c,smallest,secondsmallest;
    printf("Enter three numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    if(a<b && a<c){
        smallest =a;
        if(b<c){
            secondsmallest=b;
        }
        else{
            secondsmallest=c;
        }
    }
    else if(b<a && b<c)
    {
        smallest=b;
        if(a<c){
            secondsmallest=a;
        }
        else{
            secondsmallest=c;
        }
    }
    else{
        smallest=c;
        if(a<b){
            secondsmallest=a;
        }
        else{
            secondsmallest=b;
        }
    }
    printf("Second Smallest: %d\n", secondsmallest);
    return 0;
}