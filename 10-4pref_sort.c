#include <stdio.h>
#include <string.h>

typedef struct{
    char name[20];
    int pop;
    int area;
    double density;
}Prefecture;

int main(void){
    FILE *fp;
    int i = 0;
    int j,max;
    char Name[128];
    
    Prefecture p[47];
    
    if((fp = fopen("prefectures.txt","r")) == NULL)
        printf("\aファイルをオープンdekimasen\n");
    else{
        while(fscanf(fp, "Name:%s Area:%d Population:%d density:%lf\n",p[i].name,&p[i].area,&p[i].pop,&p[i].density) != EOF){
            p[i].density = p[i].pop / p[i].area;
            //printf("都道府県名%-10s 面積%d 人口%d 人口密度%lf\n",p[i].name,p[i].area,p[i].pop,p[i].density);
            i++;
        }
        fclose(fp);
    }
    for(i = 0;i < 47;i++){
      max = i;
        for(j = i + 1;j < 47;j++){
            if(p[j].density > p[max].density){
                max = j;
            } 
        }  
        int temp = p[i].density;
            p[i].density = p[max].density;
            p[max].density = temp;
            
            temp = p[i].area;
            p[i].area = p[max].area;
            p[max].area = temp;
            
            temp = p[i].pop;
            p[i].pop = p[max].pop;
            p[max].pop = temp;
            
            strcpy(Name,p[i].name);
            strcpy(p[i].name ,p[max].name);
            strcpy(p[max].name,Name);
            
            
    }
    for(i = 0; i < 47; i++)
    printf("都道府県名%-10s 面積%d 人口%d 人口密度%lf\n",p[i].name,p[i].area,p[i].pop,p[i].density);
    
    return 0;
}
