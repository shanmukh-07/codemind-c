#include<stdio.h>
int main()
{
    int n,i,j,f,a[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<n;j++)
    {
        f=1;
        for(i=0;i<n;i++)
        {
            if(i!=j)
            {
                f=f*a[i];
            }
        }
        printf("%d ",f);
    }
}