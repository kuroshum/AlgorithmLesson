#include <stdio.h>
#include <string.h>

struct prefecture{
    char name[20];
    int population;
    int area;
    double density;
};

struct prefecture pref_input(char n[20], int p,int a,double d){
    
    struct prefecture tmp;
  
    strcpy(tmp.name,n);
    tmp.population = p;
    tmp.area = a;
    tmp.density = d;
    
    return tmp;
}

int main(void){
    struct prefecture j;
    
    
    scanf("%s",j.name);
    scanf("%d",&(j.population));
    scanf("%d",&(j.area));
    j.density = j.population / j.area;
    
    j = pref_input(j.name,j.population,j.area,j.density);
    
    printf("都道府県:%s\n",j.name);
    printf("人口:%d\n",j.population);
    printf("面積:%d\n",j.area);
    printf("人口密度:%f\n",j.density);
    
    return 0;
}
