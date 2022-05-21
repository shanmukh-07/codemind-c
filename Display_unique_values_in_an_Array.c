#include<stdio.h>
int main()
{
    int n,a[100],i,c=0,j=0,k=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j]&&i!=j)
            {
                c=1;
            }
        }
        if(c==0)
        {
            printf("%d ",a[i]);
            k=1;
        }
    }
    if(k==0)
    printf("-1");
}