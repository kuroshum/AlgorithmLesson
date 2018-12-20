#include <stdio.h>

int main(){
    char *p = "123";
    printf("p = \"%s\"\n",p);
    p = "456" + 1;
    printf("p = \"%s\"\n",p);
    
    return 0;
}
