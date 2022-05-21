#include<stdio.h>
#include<math.h>
int main()
{
    int n,a,d,i,sum=0,s,sq;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a);
        d=sqrt(a);
        s=d*d;
        if(a==s)
        sum+=a;
    }
    printf("%d",sum);
}