#include <stdio.h>

typedef struct{
    char name[20];
    int pop;
    int area;
    double density;
}Prefecture;

int main(void){
    FILE *fp;
    int i = 0;
    
    Prefecture p[47];
    
    if((fp = fopen("prefectures.txt","r")) == NULL)
        printf("\aファイルをオープンdekimasen\n");
    else{
        while(fscanf(fp, "Name:%s Area:%d Population:%d density:%lf\n",p[i].name,&p[i].area,&p[i].pop,&p[i].density) != EOF){
            p[i].density = p[i].pop / p[i].area;
            printf("都道府県名%-10s 面積%d 人口%d 人口密度%lf\n",p[i].name,p[i].area,p[i].pop,p[i].density);
            i++;
        }
        fclose(fp);
    }
    
    
    return 0;
}
