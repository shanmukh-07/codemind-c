#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int n,i,c,len;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%s
",str);
        c=0,len=strlen(str);
        for(i=0;i<len;i++)
        {
            if(str[i]>=48&&str[i]<=57)
            c++;
        }
        if(c==len)
        printf("True
");
        else
        printf("False
");
    }
}