#include <stdio.h>

int main(){
    char str[] = "Wakayama University";
    int t = 0;
    
    while(str[t]){
        t++;
        if(str[t] == 'a')
            str[t] = 'A';
        if(str[t] == 'e')
            str[t] = 'E';
        if(str[t] == 'i')
            str[t] = 'I';
    }
    
    printf("%s\n",str);
}
