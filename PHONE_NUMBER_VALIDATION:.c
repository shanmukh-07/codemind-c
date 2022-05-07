#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100];
    int i,len;
    scanf("%s",str1);
    len=strlen(str1);
    if(str1[0]!=0&&len==10)
    printf("Valid");
    else
    printf("Invalid");
}