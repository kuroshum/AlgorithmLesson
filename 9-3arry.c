#include <stdio.h>
#include <string.h>

struct prefecture{
    char name[20];
    int population;
    int area;
    double density;
};

int main(void){
    
    
    struct prefecture pref[3],tmp;
    
    strcpy(pref[0].name,"Wakayama");
    pref[0].population = 1066000;
    pref[0].area = 4726;
    pref[0].density = pref[0].population / pref[0].area;
    
    strcpy(pref[1].name,"Osaka");
    pref[1].population = 8818000;
    pref[1].area = 1893;
    pref[1].density = pref[1].population / pref[1].area;
    
    strcpy(pref[2].name,"Hyogo");
    pref[2].population = 5571000;
    pref[2].area = 8392;
    pref[2].density = pref[2].population / pref[2].area;
    
    if(pref[0].density < pref[1].density){
        tmp = pref[1];
        pref[1] = pref[0];
        pref[0] = tmp;
    }
    if(pref[1].density < pref[2].density){
        tmp = pref[2];
        pref[2] = pref[1];
        pref[1]= tmp;
    }
    if(pref[0].density < pref[1].density){
       tmp = pref[0];
       pref[0] = pref[2];
       pref[2] = tmp;
    }
    
    printf("pref1:%s,density=%f\n",pref[0].name,pref[0].density);
    printf("pref2:%s,density=%f\n",pref[1].name,pref[1].density);
    printf("pref3:%s,density=%f\n",pref[2].name,pref[2].density);
    
    return 0;
}
