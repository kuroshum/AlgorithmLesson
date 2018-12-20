#include <stdio.h>

int main(void){
    char str2[][9] = {"Wakayama","Univ","Systems","Enginner"};
    int i;
    
    printf("文字列を出力します");
    for(i=0;i<4;i++){
        printf("%s\n",str2[i]);
   }
   
   printf("配列の大きさは%uバイトです\n", (unsigned)sizeof(str2));
   
   scanf("%s",str2[1]);
   printf("文字列を出力します\n");
   for(i=0;i<4;i++){
        printf("%s\n",str2[i]);
   }
}
