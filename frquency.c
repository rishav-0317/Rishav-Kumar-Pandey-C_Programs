#include<stdio.h>
void main()
{
    int arr[100],n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int freq[100]={0};
    int count=0,i,j;
    for(int i=0; i<n; i++)
    {
        count=1;
        for(j=i+1; j<n; j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                freq[j]=0;
            }
        }
        if(freq[i]!=0)
        {
            freq[i]=count;
        }
    }
    printf("Frequency of each element in the array:\n");
    for(int i=0; i<n; i++)
    {
        if(freq[i]!=0)
        {
            printf("%d occurs %d times\n", arr[i], freq[i]);
        }
    }

}