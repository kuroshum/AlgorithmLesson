#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct word{
    char name[20];
    struct word* next;
    struct word* right;
    struct word* left;
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
                    case '\n':
                             if(i > 0){
                                buf[i] ='\0';
                                return i;
                                i = 0;
                                }
                                 break;
                    default : 
                            buf[i] = ch; 
                            i++; 
                              //break;
                }
     }        
        
        return i;
 }
 struct word *create_word(char buf[20]){
    struct word *p;
    
    p =(struct word *) malloc (sizeof(struct word));
    strcpy(p->name,buf);
    p->right = NULL;
    p->left = NULL;
    p->count = 1;
    
    return p;
 }
 
void print_binary(struct word *root){

    if(root == NULL){
        return;
    }
    print_binary(root->left);
    printf("%s %d\n",root->name,root->count);
    print_binary(root->right);
}

  struct word *add_word_binary(struct word* root,char buf[20]){
      struct word *p;
      struct word *q;
      
      
      p = root->right;
      while(1){
          if(root->right == NULL){
              p = create_word(buf);
              root->right = p;
              break;
          }
          if(strcmp(p->name,buf) == 0){
              p->count++;
              break;
          }else if(strcmp(p->name,buf) < 0){
              if(p->right == NULL){
                  q = p;
                  p = create_word(buf);
                  q->right = p;
                  break;
              }else{
                  p = p->right;
                  continue;
              }
          }else if(strcmp(p->name,buf) > 0){
              if(p->left == NULL){
                  q = p;
                  p = create_word(buf);
                  q->left = p;
                  break;
              }else{
                  p = p->left;
                  continue;
              }
          }
      }
      
    }

 int main(void) {
    char buf[20];
    FILE *fp;
    //char *a;
    struct word *p;
    struct word *q;
    struct word *run;
    //struct word w[256];
    struct word *root = NULL;
    int t,i = 0,j = 0;

    fp = fopen("anne.txt", "r");

    if (fp == NULL) {
        printf("File read error!\n");
        exit(1); //異常終�?
    }

    while(read_word(fp, buf)>0) {
        if(root == NULL){
          p = (struct word *)malloc(sizeof(struct word));
          root = p;
          root->right = NULL;
          root->count = 1;
        }
     add_word_binary(root,buf);
  }
  print_binary(root);
    //free(p);
 fclose(fp);
 return 0;
}
