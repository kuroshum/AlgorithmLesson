#include <stdio.h>

void shiftleft(char str2[][9], int n){
    int s,t,i;
    char j;
    
    for(t = 0; t < n; t++){
        i = 0;
        j = str2[t][0];
        while(str2[t][i]){
            str2[t][i] = str2[t][i+1];
            i++;
        }
        str2[t][i-1] = j;
    }
   
     printf("文字列を出力します\n");
    for(i=0;i<4;i++){
        printf("%s\n",str2[i]);
   }
}

int main(void){
    char str2[][9] = {"Wakayama","Univ.","Systems","Enginner"};
    int i;
    
    printf("文字列を出力します");
    for(i=0;i<4;i++){
        printf("%s\n",str2[i]);
   }
   
   printf("配列の大きさは%uバイトです\n", (unsigned)sizeof(str2));
   
   shiftleft(str2, 4);
   
}
