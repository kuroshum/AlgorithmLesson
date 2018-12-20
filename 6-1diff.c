#include <stdio.h>

#define diff(x,y) ((x) - (y))

int main(){
    unsigned int a,b;
    
    printf("aの値を正の整数で入力してください");
    scanf("%u",&a);
    printf("bの値を正の整数で入力してください");
    scanf("%u",&b);
    
    printf("aとbの差は%uです\n",diff(a,b));

}
