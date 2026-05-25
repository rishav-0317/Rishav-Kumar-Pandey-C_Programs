#include<stdio.h>
void main()
{
    char arr[100];
    int n;
    printf("Enter the number of characters in the array: ");
    scanf("%d", &n);
    printf("Enter the characters of the array: ");
    for(int i=0; i<n; i++)
    {
        scanf(" %c", &arr[i]);
    }
    printf("The vowels in the array are: ");
    for(int i=0; i<n; i++)
    {
        if(arr[i]=='a' || arr[i]=='e' || arr[i]=='i' || arr[i]=='o' || arr[i]=='u' ||
           arr[i]=='A' || arr[i]=='E' || arr[i]=='I' || arr[i]=='O' || arr[i]=='U')
        {
            printf("%c ", arr[i]);
        }
    }
    printf("\n");
}