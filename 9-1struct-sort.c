#include <stdio.h>
#include <string.h>

struct prefecture{
    char name[20];
    int population;
    int area;
    double density;
};

int main(void){
    
    
    struct prefecture pref1,pref2,pref3,tmp;
    
    strcpy(pref1.name,"Wakayama");
    pref1.population = 1066000;
    pref1.area = 4726;
    pref1.density = pref1.population / pref1.area;
    
    strcpy(pref2.name,"Osaka");
    pref2.population = 8818000;
    pref2.area = 1893;
    pref2.density = pref2.population / pref2.area;
    
    strcpy(pref3.name,"Hyogo");
    pref3.population = 5571000;
    pref3.area = 8392;
    pref3.density = pref3.population / pref3.area;
    
    if(pref1.density < pref2.density){
        tmp = pref2;
        pref2 = pref1;
        pref1 = tmp;
    }
    if(pref2.density < pref3.density){
        tmp = pref3;
        pref3 = pref2;
        pref2= tmp;
    }
    if(pref1.density < pref3.density){
       tmp = pref1;
       pref1 = pref3;
       pref3 = tmp;
    }
    
    printf("pref1:%s,density=%f\n",pref1.name,pref1.density);
    printf("pref2:%s,density=%f\n",pref2.name,pref2.density);
    printf("pref3:%s,density=%f\n",pref3.name,pref3.density);
    
    return 0;
}
