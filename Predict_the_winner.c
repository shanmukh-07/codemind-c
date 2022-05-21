#include<stdio.h>
int main()
{
    int n,i,sum=0,sum1=0,a[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(i%2==0)
        {
            sum+=a[i];
        }
        else
        {
            sum1+=a[i];
        }
    }
    if((sum-sum1)%4==0)
    printf("X");
    else
    printf("Y");
}