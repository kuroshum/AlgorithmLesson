#include <stdio.h>



int main(void){
    unsigned int x,y;
    int cnt = 0;
    
    printf("xの値を入力してください:"); scanf("%u",&x);
    y = x;
    
    
    
    while(1){
        if(x & 1U) break;
        x >>= 1;
        cnt++;
    }
    printf("%dは%d*2^%dです\n",y,x,cnt);
    
    
}
