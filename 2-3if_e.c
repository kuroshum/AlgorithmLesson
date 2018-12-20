#include <stdio.h>

int main()
{
  int a,b,c;

  printf("Input a:"); scanf("%d",&a);
  printf("Input b:"); scanf("%d",&b);
  printf("Input c:"); scanf("%d",&c);
  
  if((a%10)<=3)
  {
    printf("aの１の位は３以下です");
  }

}
