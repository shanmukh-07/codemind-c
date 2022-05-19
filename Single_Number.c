#include<stdio.h>
int main(void)
{
    int n;
    scanf("%d",&n);
    int T[n];
    int j;
    for(int i=0; i<n; i++)
    {
        scanf("%d",&T[i]);
    }
    for(int i=0; i<n; i++)
    {
        
    }
    for(int i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(T[i]==T[j]&&i!=j)
            {
                break;
            }
        }
        if(j==n)
        {
            printf("%d",T[i]);
        }
    }
    return 0;
}