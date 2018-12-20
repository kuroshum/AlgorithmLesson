#include <stdio.h>

int main(void)
{
    int a,b;
    
    printf("Input a:"); scanf("%d",&a);
    printf("Input b:"); scanf("%d",&b);
    
    printf("aとbの平均は%.1fです\n",(double)(a + b)/2);
    
    return 0;
}
