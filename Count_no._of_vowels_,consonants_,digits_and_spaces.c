#include<stdio.h>
int main()
{
    int v=0,c=0,d=0,a=0,i;
    char s[100];
    scanf("%[^
]s",s);
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]==' ')
        a++;
        else if(s[i]>='0'&&s[i]<='9')
        d++;
        else if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
        v++;
        else
        c++;
    }
    printf("Vowels: %d
",v);
    printf("Consonants: %d
",c);
    printf("Digits: %d
",d);
    printf("White spaces: %d
",a);
}