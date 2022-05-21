#include<stdio.h>
int main()
{
    int n,a=0,b=1,c,min,max,i,r1,r2;
    scanf("%d",&n);
    for(i=1;;i++)
    {
        c=a+b;
        a=b;
        b=c;
        if(c<n)
        {
            min=c;
        }
        else
        {
            max=c;
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