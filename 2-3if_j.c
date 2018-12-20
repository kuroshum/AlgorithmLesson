#include <stdio.h>

int main()
{
  int a,b,c,max,max_a,max_b,max_c;

  printf("Input a:"); scanf("%d",&a);
  printf("Input b:"); scanf("%d",&b);
  printf("Input c:"); scanf("%d",&c);
  
  if(a%2==0)
  {
    max_a = a;
  }else if(b%2==0)
  {
    max_b = b;
  }else if(c%2==0)
  {
    max_c = c;
  }else{
    printf("偶数の値はありません");
  }
  
  max = max_a;
  
   if(max>max_b) max = max_b;
  if(max>max_c) max = max_c;
  
  printf("3変数のうち最大の偶数は%dです",max);
}
