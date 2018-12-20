#include <stdio.h>

int main(){
    char c;
    int i;
    double d;
    int a[10];
    
    printf("char型の変数cが占有するメモリ領域は%uバイトです。\n",(unsigned)sizeof(c));
    printf("int型の変数iが占有するメモリ領域は%uバイトです。\n",(unsigned)sizeof(i));
    printf("double型の変数cが占有するメモリ領域は%uバイトです。\n",(unsigned)sizeof(d));
    printf("int型の変数aが占有するメモリ領域は%uバイトです。\n",(unsigned)sizeof(a));
    printf("配列aの要素数は%uです。\n",(unsigned)(sizeof(a) / sizeof(a[0])));
}
