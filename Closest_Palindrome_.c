#include<stdio.h>
int main()
{
    int n,sum=0,r,i,r1,r2,min,max,d;
    scanf("%d",&n);
    for(i=n-1;i>=1;i--)
    {
        d=i;
        sum=0;
        while(d>0)
        {
            r=d%10;
            sum=sum*10+r;
            d=d/10;
        }
        if(i==sum)
        {
            min=i;
            break;
        }
    }
    for(i=n+1;;i++)
    {
        d=i;
        sum=0;
        while(d>0)
        {
            r=d%10;
            sum=sum*10+r;
            d=d/10;
        }
        if(i==sum)
        {
            max=i;
            break;
        }
    }
    r1=n-min;
    r2=max-n;
    if(r1<r2)
    printf("%d",min);
    else if(r1==r2)
    printf("%d %d",min,max);
    else
    printf("%d",max);
}