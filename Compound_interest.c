#include<stdio.h>
#include<math.h>
int main()
{
    double p,r,t,ci,x,cc;
    scanf("%lf%lf%lf",&p,&r,&t);
    x=r/100.0;
    cc=pow((1+x),t);
    ci=p*cc;
    printf("%.2lf",ci);
}