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

int main(void){
    int ary[10] ={72,74,50,71,77,84,61,90,73,75};

    printf("%d\n",*max_element(ary,10));
}
