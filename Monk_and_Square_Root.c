#include<stdio.h>
int main()
{
    long long int i,j,n,a,b,c=-1;
    scanf("%lld",&n);
    for(j=1;j<=n;j++)
    {
        c=-1;
        scanf("%lld%lld",&a,&b);
        for(i=0;i<b;i++)
        {
            if((i*i)%b==a)
            {
                c=i;
                break;
            }
        }
        printf("%lld
",c);
    }
}