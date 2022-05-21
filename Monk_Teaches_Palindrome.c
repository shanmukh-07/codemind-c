#include<stdio.h>
#include<string.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        int j,k,c,len,d=0;
        char s[100],s1[100];
        scanf("%s",s);
        len=strlen(s);
        for(j=len-1;j>=0;j--)
        {
            s1[d]=s[j];
            d++;
        }
        s1[d]=NULL;
        k=strcmp(s,s1);
        if(k==0)
        {
            if(d%2==0)
            {
                printf("YES EVEN
");
            }
            else
            {
                printf("YES ODD
");
            }
        }
        else
        {
            printf("NO
");
        }
    }
}