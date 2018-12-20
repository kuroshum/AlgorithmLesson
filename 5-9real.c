#include <stdio.h>

int main(){
    float f;
    double d;
    long double ld;
    
    printf("実数を入力してください:"); scanf("%Lf",&ld);
    printf("float型のサイズは%fバイトで、値は%fです\n",(float)sizeof(ld),(float)ld);
    printf("double型のサイズは%fバイトで、値は%fです\n",(double)sizeof(ld),(double)ld);
    printf("long double型のサイズは%Lfバイトで、値は%Lfです\n",sizeof(ld),ld);
    
}
