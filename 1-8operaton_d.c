#include <stdio.h>

int main(void)
{
    int a,b;
    
    printf("Inout a:"); scanf("%d",&a);
    printf("Input b:"); scanf("%d",&b);
    
    printf("aをbで割った商は%dで、余りは%dです\n",a/b,a%b);
    
    return 0;
}
