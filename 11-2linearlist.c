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
 
 int main(void) {
    char buf[20];
    FILE *fp;
    char words[20];
    struct word* p;
    struct word* root = NULL;
    int t,i = 0;

    fp = fopen("anne_short.txt", "r");

    if (fp == NULL) {
        printf("File read error!¥n");
        exit(1); //逡ｰ蟶ｸ邨ゆｺ?
    }

 while(read_word(fp, buf)>0) {

    if(root == NULL){
        p = malloc (sizeof(struct word));
        root = p;
        strcpy(root->name, buf);
        root->next = NULL;
        root->count = 1;
    }else{
        for(p = root;p != NULL;p=p->next){
            if(strcmp(p->name,buf) == 0){
                p->count++;
                break;
            }else if(p->next == NULL){
                p->next = malloc (sizeof(struct word));
                strcpy(p->next->name,buf);
                p->next->next = NULL;
                p->next->count = 1;
                break;
            }
        }
        //strcpy(p->name,buf);
    }
   /* t = 0;
    while(buf[t] != '¥0'){
        p->name[t] = buf[t];
        t++;
    }
    p->name[t+1] = '¥0';
	
    //words[i] = p;
   */
  }
  
  p = root;
  while(p != NULL){
        printf("%s %d¥n",p->name,p->count);
        p = p-> next;
        free(p);
    }
    //printf("%s ",words[i]);
    //i++;
    

 fclose(fp);
 return 0;
}
