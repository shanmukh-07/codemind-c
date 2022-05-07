#include<stdio.h>
int main()
{
    int ar[100],i,n,f=0,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
        if(ar[i]%2==0)
        c++;
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            if(ar[i]%2==0)
            {
                f++;
            }
        }
    }
    if(f==c)
    printf("True");
    else
    printf("False");
}