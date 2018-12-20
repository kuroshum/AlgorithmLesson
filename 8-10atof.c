#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char str1[128],str2[128],str3[128],str4[128];
    double d;
    
    printf("整数部分を入力してください");
    scanf("%s",str1);
    printf("小数部分を入力してください");
    scanf("%s",str2);
    str4 = '.';
    
    str3 = strcat(str1,str4);
    str3 = strcat(str3,str2);
    
    printf("%f",atof(str3));
    
    
}
