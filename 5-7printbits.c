#include <stdio.h>

int count_bits(unsigned x){
    int bits = 0;
    while(x){
        if(x & 1U) bits++;
        x >>= 1;
    }
    return bits;
}

int int_bits(void){
    return count_bits(~0U);
}

void print_bits(unsigned x){
    int i;
    for(i = int_bits() - 1; i >= 0; i--){
        if((x >> i) & 1U == 1){
            putchar('1');
          }else{ 
          putchar('0');
        }
      }
}

int main(){
    int a,b;
    
    printf("aの値を入力してください："); scanf("%d",&a);
    printf("bの値を入力してください："); scanf("%d",&b);
    
    printf("\na = "); print_bits(a);
    printf("\nb = "); print_bits(b);
    printf("\na & b = "); print_bits(a & b);
    printf("\na | b = "); print_bits(a | b);
    printf("\na ^ b = "); print_bits(a ^ b);
    putchar('\n');

}
