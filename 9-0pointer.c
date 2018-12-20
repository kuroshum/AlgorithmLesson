#include <stdio.h>

int main(void){
    int a[] = {50,10,30};
    int *p,*q;
    int tmp,i;
    
    p = a;
    
    for(i = 0; i < 2; i++){
        if(*(p+i) > *(p+i+1)){
            tmp = *(p + i + 1);
            *(p + i + 1) = *(p + i);
            *(p+i) = tmp;
        }
    }
    
    printf("a[]:%d,%d,%d\n",a[0],a[1],a[2]);
    return 0;
}
