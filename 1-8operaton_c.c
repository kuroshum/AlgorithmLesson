#include <stdio.h>

int main(void)
{
    int a,b;
    
    printf("Inout a:"); scanf("%d",&a);
    printf("Input b:"); scanf("%d",&b);
    
    printf("a+bの和の符号を反転した-a+bは%dです\n",-(a+b));
    
    return 0;
}
