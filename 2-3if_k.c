#include <stdio.h>

int main()
{
  int a,b,c,count=0;

  printf("Input a:"); scanf("%d",&a);
  printf("Input b:"); scanf("%d",&b);
  printf("Input c:"); scanf("%d",&c);
  
  if(a%3==0)
  {
    count++;
  }if(b%3==0)
  {
    count++;
  }if(c%3==0)
  {
    count++;
  }
  
  printf("3変数の中に３の倍数は%d個含まれています",count);
}
