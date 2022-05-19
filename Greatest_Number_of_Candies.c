#include<stdio.h>
int main()
{
    int n,t;
    scanf("%d",&n);
    int arr[n],i,max=0,s,c;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    scanf("%d",&t);
    for(i=0;i<n;i++)
    {
        if((arr[i]+t)>=max)
        {
            printf("True ");
        }
        else
        {
            printf("False ");
        }
    }
    return 0;
}