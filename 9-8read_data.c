#include <stdio.h>
#include <time.h>

int main(void){
    FILE *fp;
    int i = 0;
    int t;

    if((fp = fopen("exec_count.txt","w")) == NULL)
            printf("\a���̃v���O�����͏��߂Ď��s���܂����B\n");
            fprintf(fp,"%d",i);
    else{
        fscanf(fp, "%d",&i);
        t = i + 1;
        fprintf(fp,"%d",t);
        printf("���̃v���O���������s���ꂽ�̂�%d��ڂł�",t);
        fclose(fp);
    }

    return 0;

}
