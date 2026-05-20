#include<stdio.h>
void main()
{
    int n,notes_500,notes_100,notes_10;
    int remaining=0;
    printf("Enter a amount to withdraw: ");
    scanf("%d",&n);
    if(n%10==0)
    {
        notes_500 = n/500;
        remaining = n-(500*notes_500);
        notes_100 = remaining/100;
        remaining = remaining%100;
        notes_10 = remaining/10;

    }
    else{
        printf("Invalid Input");
    }
    printf("Notes of 500: %d\n",notes_500);
    printf("Notes of 100: %d\n",notes_100);
    printf("Notes of 10: %d\n",notes_10);
}