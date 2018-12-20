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

void print_bits(unsigned a){
    int i;
    for(i = int_bits() - 1; i >= 0; i--)
        putchar(((a >> i) & 1U) ? '1' : '0');
}

int main(){
    int x,y;
    
    printf("xの値を入力してください："); scanf("%d",&x);
    printf("yの値を入力してください："); scanf("%d",&y);
    
    printf("\nx = "); print_bits(x);
    printf("\ny = "); print_bits(y);
    printf("\nx & y = "); print_bits(x & y);
    printf("\nx | y = "); print_bits(x | y);
    printf("\nx ^ y = "); print_bits(x ^ y);
    putchar('\n');
    
    
    
}
