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
    p->next = NULL;
    p->count = 1;
    
    return p;
 }
 
 struct word *add_word(char buf[20],struct word *root){
     struct word *p;
     struct word *q;
     
      p = root;
    while(p != NULL)
    {
       if(strcmp(p->name,buf) == 0){
          p->count++;
          break;
	   }  else if(p->next == NULL){
          q = p;
	        p = create_word(buf);
		      q->next = p;
          break;
	   } else if(strcmp(p->next->name,buf) > 0){
          q = p;
		      p = create_word(buf);
		      p->next = q->next;
          q->next = p;
          break;
       }
      p = p->next;
    }   
     return root;
 }
 
void print_list(struct word *root){
    struct word *p;

    p = root->next;
    while(p != NULL){
        printf("%s %d\n",p->name,p->count);
        p=p->next;
    }
}

 int main(void) {
    char buf[20];
    FILE *fp;
    //char *a;
    struct word *p;
    struct word *run;
    struct word *q;
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
        //strcpy(root->name,NULL);
        root->next = NULL;
        root->count = 1;
    }else {
        if(strcmp(root->next->name,buf) > 0){
			     q = p;
	         p = create_word(buf);
           root = add_word(buf,root);
			     p->next = root->next;
           root->next = p;
           continue;
		   }
    }
   add_word(buf,root);
  }
  print_list(root);
    //free(p);
 fclose(fp);
 return 0;
}
