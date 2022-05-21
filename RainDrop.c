#include<stdio.h>
int main()
{
    int n,i,c=0,c1=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            if(i==3)
            {
                printf("Pling");
            }
            else if(i==5)
            {
                printf("Plang");
            }
            else if(i==7)
            {
                printf("Plong");
            }
            else
            {
                c1++;
            }
        }
        if(c==c1)
        {
            printf("%d",n);
        }
    }
}