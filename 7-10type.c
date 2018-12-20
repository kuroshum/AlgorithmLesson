#include <stdio.h>

int main(void){
    int i = 8;
    double d = 1.0;
    int *pi = &i;
    double *pd = &d;
    
    printf("変数iの値は%dです\n",i);
    printf("変数dの値は%2fです\n",d);
    *pi = *pi/2; *pd = *pd/2;
    printf("変数iとdの値を2で割りました\n");
    printf("変数iの値は%dです\n",i);
    printf("変数dの値は%2fです\n",d);
    *pd = *pd / *pi;
    printf("変数dの値をiで割りました\n");
    printf("変数dの値は%fです\n",d);
    
}
