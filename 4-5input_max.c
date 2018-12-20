#include <stdio.h>

int input_score(int a)
{  
   printf("値を入力してください："); scanf("%d",&a); 
   
   if(a<-1 || a>100){
    printf("値を再入力してください：");
    scanf("%d",&a);
  }
  
 return a;
}

int main()
{
    int y,x,i,max = 0;
    
    while(1){
    y = input_score(x);
    if( y == -1) break;
    if(y>=0 && y<=100){
    if(y > max) max = y;
    }
        }
    
    printf("入力された最大値は%dです\n",max);
}
