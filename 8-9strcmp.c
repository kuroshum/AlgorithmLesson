#include <stdio.h>
#include <string.h>



int main(void){
    char str1[128],str2[128],str3[128],temp[128];
    int a,b,c;
    
    printf("str1の文字列を入力してください:");
    scanf("%s",str1);
    printf("str2の文字列を入力してください:");
    scanf("%s",str2);
    printf("str3の文字列を入力してください:");
    scanf("%s",str3);
    
    a = strcmp(str1,str2);
    if(a>0){
        strcpy(temp,str1);
        strcpy(str1,str2);
        strcpy(str2,temp);
    }
    b = strcmp(str1,str3);
    if(b>0){
        strcpy(temp,str1);
        strcpy(str1,str3);
        strcpy(str3,temp);
    }
    c = strcmp(str2,str3);
    if(c>0){
        strcpy(temp,str2);
        strcpy(str2,str3);
        strcpy(str3,temp);
    }
    printf("%s\n",str1);
    printf("%s\n",str2);
    printf("%s\n",str3);
}
