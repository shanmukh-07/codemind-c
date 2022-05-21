#include<stdio.h>
int main()
{
    int d,j,a[100],n,i,f=1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        d=a[i];
        for(j=a[i];j>0;j--)
        {
            f=f*j;
        }
        printf("%d
",f);
        f=1;
    }
    return 0;
}