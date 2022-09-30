#include<stdio.h>
int main()
{
    int x,y,a[100],b[100],c,s=0;
    scanf("%d",&x);
    for(int i=0;i<x;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&y);
    for(int i=0;i<y;i++)
    {
        scanf("%d",&b[i]);
    }
    scanf("%d",&c);
    for(int i=0;i<x;i++)
    {
        if(c>=a[i]&&c<=b[i])
        s++;
    }
    printf("%d",s);
}