#include<stdio.h>
int main()
{
    int m,n,i,c=0,j;
    scanf("%d%d",&m,&n);
    for(i=m;i<n;i++)
    {
        c=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                c++;
            }
        }
        if(c==2)
        {
            printf("%d
",i);
        }
    }
}