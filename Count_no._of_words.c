#include<stdio.h>
int main()
{
    char s[100];
    int c=1,i;
    scanf("%[^
]s",s);
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]==' ')
        c++;
    }
    printf("%d",c);
}