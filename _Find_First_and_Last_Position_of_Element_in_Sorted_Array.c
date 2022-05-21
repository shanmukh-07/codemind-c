#include<stdio.h>
int main()
{
    int a[100],n,i,j,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&j);
    for(i=0;i<n;i++)
    {
        if(a[i]==j)
        {
            printf("%d ",i);
            c++;
            break;
        }
    }
    for(i=n-1;i>=0;i--)
    {
        if(a[i]==j)
        {
            printf("%d",i);
            c++;
            break;
        }
    }
    if(c==0)
    printf("-1 -1");
}