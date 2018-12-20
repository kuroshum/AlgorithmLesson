#include <stdio.h>

int main(){
    int i,ch;
    int cnt[2] = {0};
    
    while(ch = getchar() != EOF){
        switch(ch){
          case '0' : cnt[0]++; break;
          case '1' : cnt[1]++; break;
          case '2' : cnt[0]++; break;
          case '3' : cnt[1]++; break;
          case '4' : cnt[0]++; break;
          case '5' : cnt[1]++; break;
          case '6' : cnt[0]++; break;
          case '7' : cnt[1]++; break;
          case '8' : cnt[0]++; break;
          case '9' : cnt[1]++; break;
        }
    }
    if(cnt[0] > cnt[1])
        printf("偶数の方が多い");
      else{
        printf("奇数の方が多い");
      }
}
