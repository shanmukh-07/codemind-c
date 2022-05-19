#include<stdio.h>
int reverse(int a)
{
    int rev=0,r;
    while(a>0)
    {
        r=a%10;
        rev=rev*10+r;
        a=a/10;
    }
    return rev;
}
int main()
{
    int x;
    scanf("%d",&x);
    x=x+reverse(x);
    while(x!=reverse(x))
    {
        x=x+reverse(x);
    }
    printf("%d",x);
}