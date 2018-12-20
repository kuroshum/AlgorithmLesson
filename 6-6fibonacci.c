#include <stdio.h>

int fibonacci(int i){
    int f[i];
    int fib, j = 2;
    
    f[0] = 0;
    f[1] = 1;
    
    fib = fib + fibonacci(j-1)
    
    return f[j];
}

int main(void){
    int n;
    
    printf("正の整数を入力してください：");
    scanf("%d",&n);
    
    printf("Fnは%dです",fibonacci(n));

}


