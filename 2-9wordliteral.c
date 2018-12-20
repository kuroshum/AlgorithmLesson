#include <stdio.h>

int main()
{
  int a,max;
  
  scanf("%d",&a);
  max = a;
  
   if(a>=10 && a<=20){
  while(a != max*3){
    printf("+");
    a++;
    }
  }
}
