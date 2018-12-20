#include <stdio.h>

int main(void)
{
    int a,b;
    
    printf("Input a:"); scanf("%d",&a);
    printf("Input b:"); scanf("%d",&b);
    
    printf("(a*3 + b*4)/3は%.5fです\n",(double)(a*3 + b*4)/3);
    
    return 0;
}
