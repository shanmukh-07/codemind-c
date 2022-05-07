#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int len;
    scanf("%s",s);
    len=strlen(s);
    for(int i=0;i<len;i++)
    {
        if(s[i]=='6')
        {
            s[i]='9';
            break;
        }
    }
    printf("%s",s);
}