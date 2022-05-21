#include<stdio.h>
int main()
{
    int n,i,j,a[100],k=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&j);
    for(i=0;i<n;i++)
    {
        if(a[i]==j)
        {
            printf("%d",i);
            k=1;
            break;
        }
    }
    if(k==0)
    printf("-1");
    return 0;
}