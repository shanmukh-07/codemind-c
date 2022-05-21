#include<stdio.h>
int main()
{
    int i,j,c=0,k=0;
    char s[100];
    scanf("%s",s);
    for(i=0;s[i]!=NULL;i++)
    {
        c=0;
        for(j=0;s[j]!=NULL;j++)
        {
            if(s[i]==s[j]&&i!=j)
            {
                c=1;
                break;
            }
        }
        if(c==0)
        {
            printf("%d",i);
            k=1;
            break;
        }
    }
    if(k==0)
    printf("-1");
}