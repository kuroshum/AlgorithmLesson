#include <stdio.h>
#include <stdlib.h>

 int read_word(FILE *fp, char buf[]){
     int ch,i = 0;

     while((ch = fgetc(fp)) != EOF){
                //buf[i] = ch;
                switch(ch){
                    case ' ' : 
                    case ',' :
                    case '.' :
                    case '\n': if(i > 0){
                                  buf[i] ='\0';
                                  return i;
                                  i = 0;} break;
                    default : buf[i] = ch; 
                              i++; 
                              break;
                }
     }
          if(i>0){
              buf[i] = '\0';
              printf("%s¥n",buf);
          }        
        
        return i;
 }

 int main(void) {
    char buf[20];
    FILE *fp;
    char* words[400];
    char* p;
    int t,i = 0;

    fp = fopen("anne_short.txt", "r");

    if (fp == NULL) {
        printf("File read error!\n");
        exit(1); //異常終了
    }

 while(read_word(fp, buf)>0) {
    p = (char *) malloc (sizeof(char) * 20);
    t = 0;
    while(buf[t] != '\0'){
        *(p + t) = buf[t];
        t++;
    }
    *(p + t) = '\0';
    words[i] = p;
    printf("%s ",words[i]);
    i++;
    free(p);
  }
  
  
 fclose(fp);
 return 0;
}
