#include <stdio.h>

int count_bits(unsigned a){
    int bits = 0;
    while(a){
        if(a & 1U) bits++;
        a >>= 1;
    }
    return bits;
}

int int_bits(void){
    return count_bits(~0U);
}

void print_nbits(unsigned a,unsigned n){
    int i = int_bits();
    i = (n < i) ? n - 1: i -1;
    for(i; i >= 0; i--)
        putchar(((a >> i) & 1U) ? '1' : '0');
}

int main(){
    int x;
    
    printf("xの値を入力してください:"); scanf("%d",&x);
    
    print_nbits(x,16);
    putchar('\n');
    printf("%06o\n",x);
    printf("%04X\n",x);
}
