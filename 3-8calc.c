#include <stdio.h>

int main()
{
    int ary[10] = {72,74,50,71,77,84,61,90,73,75};
    int i,max = ary[1],min = ary[1],ave,a,h[10],e[10],s[10];
    float hens;
    for(i=0;i<10;i++){
      if(ary[i] > max) max = ary[i];
      if(ary[i] < min) min = ary[i];
      a = a + ary[i];
   }
     ave = a / 10;
     s[0] = 0;
   
    for(i=0;i<10;i++)
    {
        h[i] = ary[i] - ave;
        s[i] = s[i-1] + (h[i] * h[i]);
    }
    hens = s[9] / 10;
    
    printf("%d\n",max);
    printf("%d\n",min);
    printf("%d\n",ave);
    printf("%f\n",hens);
    
    
}
