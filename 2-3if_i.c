#include <stdio.h>

int main()
{
  int a,b,c,min;

  printf("Input a:"); scanf("%d",&a);
  printf("Input b:"); scanf("%d",&b);
  printf("Input c:"); scanf("%d",&c);
  
  min = a;
  
  if(min>b) min = b;
  if(min>c) min = c;
  
  printf("3変数のうち最小の値は%dです",min);
}
