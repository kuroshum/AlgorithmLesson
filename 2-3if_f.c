#include <stdio.h>

int main()
{
  int a,b,c;

  printf("Input a:"); scanf("%d",&a);
  printf("Input b:"); scanf("%d",&b);
  printf("Input c:"); scanf("%d",&c);
  
  if(a>b)
  {
    printf("aとbのうち、大きい方は%dです",a);
  }else if(a<b){
    printf("aとbのうち、大きい方は%dです",b);
  }else if(a==b){
    printf("aとbは等しいです");
  }
}
