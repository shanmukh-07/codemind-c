#include<stdio.h>
int main()
{
    int num,r=0,s=0,n;
    scanf("%d",&num);
    n=num;
    while(num>0)
    {
        r=num%10;
        s=s+r;
        num=num/10;
    }
    if(n%s==0)
    printf("True");
    else
    printf("False");
    return 0;
}