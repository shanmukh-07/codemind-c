#include<stdio.h>
int main()
{
    int m,n,c=0,c1=0,i,t,r,d;
    scanf("%d%d",&m,&n);
    for(i=m;i<=n;i++)
    {
        if(i%10==0)
        continue;
        t=i;
        d=i;
        c=0;
        c1=0;
        while(d>0)
        {
            r=d%10;
            if(r==0)
            {
                break;
            }
            if(i%r==0)
            {
                c1++;
            }
            c++;
            d=d/10;
        }
        if(c==c1)
        {
            printf("%d ",i);
        }
    }
}