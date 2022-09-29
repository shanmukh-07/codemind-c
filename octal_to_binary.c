#include<stdio.h>
#include<math.h>
int main()
{
    long int n1,n5,p=1;
    long int dec=0,i=1,j,d;
    long int bin=0;
    scanf("%ld",&n1);
    n5=n1;
    for(j=n1;j>0;j=j/10)
    {
        d=j%10;
        if(i==1)
        p=p*1;
        else
        p=p*8;
        dec=dec+(d*p);
        i++;
    }
    i=1;
    for(j=dec;j>0;j=j/2)
    {
        bin=bin+(dec%2)*i;
        i=i*10;
        dec=dec/2;
    }
    printf("%ld",bin);
}