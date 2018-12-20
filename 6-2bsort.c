#include <stdio.h>


void bsort(int a[],int n){
    int i,j;
    
    for(i = 0;i < n -1;i++){
        for(j = n - 1;j > i;j--){
            if(a[j - 1] > a[j]){
                int temp = a[j];
                a[j] = a[j - 1];
                a[j - 1] = temp;
            }
        }
    }
}



int main(){
    int i;
    int ary[10] = {72,74,50,71,77,84,61,90,73,75};
    
    bsort(ary,10);
    
    for(i = 0;i < 9;i++){
        printf("%d ",ary[i]);
    }
}
