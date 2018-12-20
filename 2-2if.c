#include <stdio.h>

int main(void)
{
  int a;
  
  printf("整数");
  scanf("%d",&a);
  
  if(a!=0)
  {
    printf("その数は0ではありません\n");
  }
  
  return 0;
}
