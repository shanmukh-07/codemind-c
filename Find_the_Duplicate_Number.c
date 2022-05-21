#include<stdio.h>
int main()
{
    int n,i,j,a[100],c=0;
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
        if(c==1)
        {
            printf("%d",a[i]);
            break;
        }
    }
}