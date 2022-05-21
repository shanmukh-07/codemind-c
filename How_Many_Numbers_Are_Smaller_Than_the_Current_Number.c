#include<stdio.h>
int main()
{
    int a[100],d,i,c=0,n,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        d=a[i];
        for(j=0;j<n;j++)
        {
            if(d>a[j])
            c++;
        }
        printf("%d ",c);
        c=0;
    }
}