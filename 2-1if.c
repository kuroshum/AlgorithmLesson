#include <stdio.h>

int main()
{
  int a;

  printf("整数：");
  scanf("%d",&a);
  
  if(a%3==0)
  {
    printf("3の倍数です\n");
  }else {
    printf("3の倍数ではありません\n");
  }
}
