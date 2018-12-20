#include <stdio.h>

int *max_element(int ary[],int n){
    int max = ary[0];
    int i;
    int *p;
    
    for(i = 0;i < n; i++){
        if(max < ary[i])
            max = ary[i];
    }
    p = &max;
    return p;
}

void swap(int *px, int *py){
    int temp = *px;
    *px = *py;
    *py = temp;
}

int main(void){
    int ary[10] ={72,74,50,71,77,84,61,90,73,75};
    int i;
    for(i = 9;i >= 0;i--){
        swap(*max_element(ary,i),&ary[i]);
    }
    for(i = 0; i < 10; i++){
        printf("%d\n",ary[i]);
    }
}
