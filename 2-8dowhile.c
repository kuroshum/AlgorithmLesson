#include <stdio.h>

int main()
{
  int a;
  
  scanf("%d",&a);
  
 
  if(a>=10 && a<=20)
  {
  while(a!=0 && a!=1)
    {
      a = a-2;
      printf("%d ",a);
    }
  }else {
    printf("10以上20未満の整数を入力してください\n");
    scanf("%d",&a);
    }
    
}
