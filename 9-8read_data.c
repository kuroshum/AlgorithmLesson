#include <stdio.h>
#include <time.h>

int main(void){
    FILE *fp;
    int i = 0;
    int t;

    if((fp = fopen("exec_count.txt","w")) == NULL)
            printf("\aこのプログラムは初めて実行しました。\n");
            fprintf(fp,"%d",i);
    else{
        fscanf(fp, "%d",&i);
        t = i + 1;
        fprintf(fp,"%d",t);
        printf("このプログラムが実行されたのは%d回目です",t);
        fclose(fp);
    }

    return 0;

}
