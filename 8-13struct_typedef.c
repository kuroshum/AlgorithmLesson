#include <stdio.h>
#include <string.h>

typedef struct prefecture{
    char name[20];
    int population;
    int area;
    double density;
}Prefecture;

int main(){

    Prefecture w;
    
    strcpy(w.name,"Wakayama");
    w.population = 1066000;
    w.area = 4726;
    w.density = 0.0;
    
    w.density = w.population / w.area;
   
    printf("都道府県名:%s\n", w.name);
    printf("人口:%d(人)\n", w.population);
    printf("面積:%d(人)\n", w.area);
    printf("人口密度:%.2f(人/km^2)\n", w.density);
    
}
