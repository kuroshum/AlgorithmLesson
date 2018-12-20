#include <stdio.h>
#include <time.h>

int main(void){
    FILE *fp;
    int i;

    if((fp = fopen("exec_count.txt","r")) == NULL){
            i = 0;
            printf("\aこのプログラムは初めて実行しました。\n");
            fp = fopen("exec_count.txt","w");
            fprintf(fp,"%d",i);
            
    }else{
        fp = fopen("exec_count.txt","w");
        fscanf(fp, "%d",&i);
        i++;
        fprintf(fp,"%d\n",i);
        printf("このプログラムが実行されたのは%d回目です\n",i);
        fclose(fp);
    }

    return 0;

}
