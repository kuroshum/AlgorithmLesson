#include <stdio.h>
#include <string.h>

struct prefecture{
    char name[20];
    int population;
    int area;
    double density;
};

int main(){

    struct prefecture w;
    struct prefecture *p;
    
    p = &w;
    
    strcpy((*p).name,"Wakayama");
    (*p).population = 1066000;
    (*p).area = 4726;
    (*p).density = 0.0;
    
    (*p).density = (*p).population / (*p).area;
   
    printf("都道府県名:%s\n", (*p).name);
    printf("人口:%d(人)\n", (*p).population);
    printf("面積:%d(人)\n", (*p).area);
    printf("人口密度:%.2f(人/km^2)\n", (*p).density);
    
}
