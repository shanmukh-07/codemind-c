#include<stdio.h>
int main()
{
    int n,i,a=1,b=1,c=2,r;
    scanf("%d",&n);
    if(n==0)
    printf("1");
    else if(n<=2)
    printf("%d",n);
    else
    {
        for(i=3;i<=n;i++)
        {
            r=a+b+c;
            a=b;
            b=c;
            c=r;
        }
        printf("%d",r);
    }
}