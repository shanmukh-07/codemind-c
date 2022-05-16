#include<stdio.h>
int main()
{
    char str[100];
    int s,e;
    scanf("%[^
]",str);
    scanf("%d %d",&s,&e);
    for(int i=s;i<=e;i++)
    {
        printf("%c",str[i]);
    }
}