#include <stdio.h>

int main(void){
    int i,t;
    FILE *fp;
    char map[10][21];
    
    if((fp = fopen("meiro1.txt","r")) == NULL){
        printf("\aファイルをオープンできませんでした");
    }else{
        for(i = 0;i < 10;i++){
            for(t = 0;t < 21;t++){
                map[i][t] = fgetc(fp);
                putchar(map[i][t]);   
            }
        }
        fclose(fp);
        //printf("\n");
    }
    return 0;
}
