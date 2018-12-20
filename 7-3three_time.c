#include <stdio.h>

int main(){
    char str[1000];
    int i,j;
    
    printf("文字列を入力してください:");
    scanf("%s",str);
    
    for(j = 0;j < 3; j++){
        i = 0;
        while(str[i]){
            putchar(str[i++]);
        }
        
    }

}
