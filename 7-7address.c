#include <stdio.h>

int main(){
    char c[3][2];
    int i[3][2];
    double d[3][2];
    int j,k;
    
    for(j = 0;j < 3;j++){
        for(k = 0;k < 2;k++){
            printf("c[%d][%d]のアドレス:%p\n",j,k,&c[j][k]);
        }
    }


}
