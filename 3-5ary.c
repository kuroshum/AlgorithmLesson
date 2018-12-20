#include <stdio.h>

int main()
{
    int i,ary[10];
    
    for(i=0;i<10;i++)
    {
        ary[i] = i*i;
        if(i!=0)
        printf("%d,",ary[i]);
    }
}
