#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct word{
    char name[20];
    struct word* next;
    int count;
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
 struct word *create_word(char buf[20]){
    struct word *p;
    
    p =(struct word *) malloc (sizeof(struct word));
    strcpy(p->name,buf);
    p->next = NULL;
    p->count = 1;
    
    return p;
 }
 
 int main(void) {
    char buf[20];
    FILE *fp;
    //char *a;
    struct word *p;
    struct word *run;
    struct word *q;
    struct word w[256];
    struct word *root = NULL;
    int t,i = 0,j = 0;

    fp = fopen("anne_short.txt", "r");

    if (fp == NULL) {
        printf("File read error!\n");
        exit(1); //異常終了
    }

 while(read_word(fp, buf)>0) {
    if(root == NULL){
        p = (struct word *)malloc(sizeof(struct word));
        root = p;
        //strcpy(root->name,buf);
        root->next = NULL;
        root->count = 1;
    }
    
    run = root;
    while(run != NULL)
    {
       if(strcmp(run->name,buf) == 0){
          run->count++;
          break;
       } 
      run = run->next;
       
    }
    
    if(run != NULL){
      continue;
    }
    
    q = p;
    p = create_word(buf);
    q->next = p;
      
    /*
    else{
    for(run = root;run != NULL;run = run ->next){
          if(strcmp(p->name,buf) == 0){
              p->count++;
              break;
          }else if(p->next == NULL){
              p->next = create_word(buf);
              break;
          }
         }
    
    }
   */ 
  }
  p = root->next;
  
  while(p != NULL){
        printf("%s %d\n",p->name,p->count);
        p=p->next;
    }
    //free(p);
 fclose(fp);
 return 0;
}
