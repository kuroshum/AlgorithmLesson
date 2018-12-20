#include <stdio.h>

int main()
{
    int i,ary[10];
    
    for(i=0;i<10;i++)
    {
        ary[i] = i*i;
        ary[10-i] = ary[i];
    }
    
    for(i=0;i<10;i++)
    {
        printf("%d,",ary[i]);
    }
}
