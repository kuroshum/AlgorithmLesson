#include <stdio.h>

int str_length(const char *s){
    int len = 0;
    
    while(*s++)
        len++;
    return len;
}

int main(void){
    char str1[128];
    char str2[128];
    
    printf("str1の文字列を入力してください:");
    scanf("%s",str1);
    printf("str2の文字列を入力してください:");
    scanf("%s",str2);
    
    if(str_length(str1) == str_length(str2))
        printf("2つの文字列の長さは同じです");
    else 
        printf("2つの文字列の長さは異なります\n");
}
