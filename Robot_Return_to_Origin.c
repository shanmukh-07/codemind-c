#include<stdio.h>
int main()
{
    char s[100];
    int i,c=0;
    scanf("%[^
]s",s);
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]=='U'||s[i]=='R')
        {
            c++;
        }
        else if(s[i]=='D'||s[i]=='L')
        {
            c--;
        }
    }
    if(c==0)
    printf("True");
    else
    printf("False");
}