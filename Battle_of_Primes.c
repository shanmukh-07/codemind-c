#include<stdio.h>
int main()
{
    int n1,n2,c=0,i,j,sum,d=0;
    scanf("%d%d",&n1,&n2);
    sum=n1+n2;
    for(i=sum+1;;i++)
    {
        c++;
        d=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                d++;
            }
        }
        if(d==2)
        {
            break;
        }
    }
    printf("%d",c);
}