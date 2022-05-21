#include<stdio.h>
int main()
{
    int n,a[100],c=0,i,c1=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        while(a[i]>0)
        {
            c++;
            a[i]=a[i]/10;
        }
        if(c%2==0)
        {
            c1++;
        }
        c=0;
    }printf("%d",c1);
    return 0;
}