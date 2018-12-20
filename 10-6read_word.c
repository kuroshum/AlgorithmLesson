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
              printf("%s\n",buf);
          }        
        
        return i;
 }

 int main(void) {
    char buf[20];
    FILE *fp;
    char* words[400];
    int t,i = 0;

    fp = fopen("anne_short.txt", "r");

    if (fp == NULL) {
        printf("File read error!\n");
        exit(1); //ˆÙíI—¹
    }

 while(read_word(fp, buf)>0) {
    printf("%s\n", buf);
 }

 fclose(fp);
 return 0;
}
