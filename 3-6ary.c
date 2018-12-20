#include <stdio.h>

int main()
{
    int i,ary[10],ary2[10];
    
    for(i=0;i<10;i++)
    {
        ary[i] = i*i;
        ary2[i] = ary[i] + ary2[i-1];
        if(i!=0)
        printf("%d,",ary2[i]);
    }
    
}
