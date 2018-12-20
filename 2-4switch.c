#include <stdio.h>

int main()
{
  int a,b,c;

  printf("Input a:"); scanf("%d",&a);
  printf("Input b:"); scanf("%d",&b);
  printf("Input c:"); scanf("%d",&c);
  
  switch(a%2)
  {
    case 0 : puts("その数は偶数です"); break;
    case 1 : puts("その数は奇数です"); break;
  }
}
