#include<stdio.h>
#include<string.h>
int main(){
    char str[100],ch;
    scanf("%[^
]s",str);
    ch=str[0];
    int len=strlen(str),i;
    for(i=0;i<len;i++){
        if(ch>str[i]){
            ch;
        }else
        ch=str[i];
    }printf("%c",ch);
}