#include <stdio.h>

int main(void){
    char n[20];
    FILE *fp;
    
    scanf("%s",n);
    fp = fopen(n,"r");
    
    if(fp == NULL)
        printf("\aファイル\"%s\"をオープンできませんでした\n",n);
    else{
        printf("\aファイル\"%s\"をオープンしました\n",n);
        fclose(fp);
    }


    return 0;
}
