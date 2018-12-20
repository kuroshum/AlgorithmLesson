#include <stdio.h>

int main(void){
    FILE *fp;
    char name[20];
    int pop=0;
    int area=0;
    double density=0.0;
    
    if((fp = fopen("prefectures.txt","r")) == NULL)
        printf("\aファイルをオープンdekimasen\n");
    else{
        while(fscanf(fp, "Name:%s Area:%d Population:%d density:%lf\n",name,&area,&pop,&density) != EOF){
            density = pop / area;
            printf("都道府県名%-10s 面積%d 人口%d 人口密度%lf\n",name,area,pop,density);
        }
        fclose(fp);
    }
    
    
    return 0;
}
