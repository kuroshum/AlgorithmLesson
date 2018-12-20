#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct word{
    char name[20];
    struct word* next;
};

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
    struct word* p;
    struct word* root = NULL;
    int h,t,i = 0;

    fp = fopen("anne_short.txt", "r");

    if (fp == NULL) {
        printf("File read error!\n");
        exit(1); //異常終�?
    }

 while(read_word(fp, buf)>0) {

    if(root == NULL){
        p = malloc (sizeof(struct word));
        root = p;
        root->next = NULL;
        i++;
    }else{
        p->next = malloc (sizeof(struct word));
        p = p->next;
    }
    strcpy(p->name, buf);
	
    //words[i] = p;
   
  }
  
  p = root;
  while(p != NULL){
        printf("%s ",p->name);
        p = p-> next;
        free(p);
    }
    //printf("%s ",words[i]);
    //i++;
    

 fclose(fp);
 return 0;
}
