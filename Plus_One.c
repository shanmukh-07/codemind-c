#include<stdio.h>
int main()
{
    int n,i,sum=0,a[100],sum1=0,k=0,r;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum=sum*10+a[i];
    }
    sum=sum+1;
    while(sum>0)
    {
        r=sum%10;
        a[k]=r;
        k++;
        sum=sum/10;
    }
    for(i=k-1;i>=0;i--)
    {
        printf("%d ",a[i]);
    }
}