#include <stdio.h>
#include <ctype.h>

int main(){
    char str[128];
    int i = 0;
    
    printf("文字列を入力してください");
    scanf("%s",str); 
    
    while(str[i]){
        if(isupper(str[i]))
            str[i] = tolower(str[i]);
        else if(islower(str[i]))
            str[i] = toupper(str[i]);
        i++;
    }
    printf("%s\n",str);
}
