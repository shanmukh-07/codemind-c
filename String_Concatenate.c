#include<stdio.h>
#include<string.h>
int main(void)
{
    char s1[100],s2[100],string[150];
    char temp;
    scanf("%s",string);
    scanf("%s",s2);
    strcat(string,s2);
    int i,j;
    int n=strlen(string);
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(string[i]>string[j])
            {
                temp=string[i];
                string[i]=string[j];
                string[j]=temp;
            }
        }
    }
    printf("%s",string);
    return 0;
}