#include <stdio.h>

int sum(int a)
{
   int i;
   int Sum;
   for(i = 1; i<=a; i++){
     Sum = Sum + i;
    }
    return Sum; 
}

int main()
{
    int n;
    
    printf("正の整数："); scanf("%d",&n);
    printf("1から%dまでの和は%dです\n",n,sum(n));
    
    return 0;
}
