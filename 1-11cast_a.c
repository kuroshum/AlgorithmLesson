#include <stdio.h>

int main(void)
{
    int a,b;
    
    printf("Input a:"); scanf("%d",&a);
    printf("Input b:"); scanf("%d",&b);
    
    printf("a*bは%.5dです\n",a * b);
    
    return 0;
}
