#include<stdio.h>
int main()
{
    int t,n,a[100];
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%d",&n);
        for(int j=0;j<n;j++)
        {
            scanf("%d ",&a[j]);
        }
        int d=0,min=999,max=0;
        for(int j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                d=1;
            }
        }
        if(d==0)
        {
            printf("0");
        }
        else
        {
            for(int j=0;j<n;j++)
            {
                if(a[j]>max)
                max=a[j];
                if(a[j]<min)
                min=a[j];
            }
            printf("%d
",max-min);
        }
    }
}