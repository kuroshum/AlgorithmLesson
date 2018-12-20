#include <stdio.h>
void put_chars(int ch,int b){

    while(b-- > 0){
       putchar(ch);
       }
}

int main(){
    int i,n;
    char Ch;
    
    printf("文字："); scanf("%c",&Ch);
    printf("数字："); scanf("%d",&n);
    
    for(i=0;i < n;i++){
     put_chars(' ',n-i);
     put_chars(Ch,i*2+1);
     putchar('\n');
    }
    
    for(i=n-1;i > 0;i--){
     put_chars(' ',n-i + 1);
     put_chars(Ch,i*2 - 1);
     putchar('\n');
    }
    return 0;
}
