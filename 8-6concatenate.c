#include <stdio.h>

char *str_copy(char *d,char *s){
    char *t = d;
    
    while(*d++ = *s++)
        ;
    return t;
}

char *cat(char *s,char *con){
    char *t = con;
    while((*con++) != '\0')
        ;
        con--;                
    while (((*con++) = (*s++)) != '\0')    
           ;
    return t;
}

int main(void){
    char str1[128];
    char str2[128];
    char concat[256];
    
    printf("str1の文字列を入力してください:");
    scanf("%s",str1);
    printf("str2の文字列を入力してください:");
    scanf("%s",str2);
    
    str_copy(concat,str1);
    cat(str2,concat);
    
    printf("concat:%s\n",concat);
    
    return 0;
}
