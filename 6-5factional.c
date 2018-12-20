#include <stdio.h>

int factional(int n){
    int i,sum = 1;
    for(i = n;i > 1;i -= 2)
         sum = sum * i * (i-1);
   return sum;
}

int main(void){
    int num;
    
    printf("整数を入力してください：");
    scanf("%d",&num);
    
    printf("%dの階乗は%dです。\n",num,factional(num));
    
    return 0;
}
