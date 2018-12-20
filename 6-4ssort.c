#include <stdio.h>


void bsort(int a[],int n){
    int i,j,k;
    int min;
    
    for(i = 0;i < n;i++){
      min = a[i];
        for(j = i;j < n;j++){
            if(a[j + 1] < min){
                min = a[j];
            } 
        }  
        int temp = a[i];
            a[i] = min;
            min = temp;
    }
    
}



int main(){
    int i;
    int ary[10] = {72,74,50,71,77,84,61,90,73,75};
    
    bsort(ary,10);
 
   
}
