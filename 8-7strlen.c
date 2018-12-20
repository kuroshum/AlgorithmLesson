#include <stdio.h>
#include <string.h>



int main(void){
    char str1[128];
    char str2[128];
    char a,b;
    printf("str1の文字列を入力してください:");
    scanf("%s",str1);
    printf("str2の文字列を入力してください:");
    scanf("%s",str2);
    
    a = strlen(str1);
    b = strlen(str2);
    
    if(a == b)
        printf("2つの文字列の長さは同じです\n");
    else 
        printf("2つの文字列の長さは異なります\n");
}
