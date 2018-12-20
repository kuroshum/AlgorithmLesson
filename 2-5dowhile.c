#include <stdio.h>

int main()
{
  
  
   int a,max,count;
  do{
  
   scanf("%d",&a);
   
   if(a<=10 && a>=0){
     printf("入力された値は%dです\n",a);
   }else{
     printf("0~10の範囲内で入力してください\n");
   }
   if(a==0) count++;
   
   max = max + a;
   }while(a != 10);
   
   printf("0は%d回入力されました",count);
   printf("入力された値の合計は%dです",max);
   return 0;
}
