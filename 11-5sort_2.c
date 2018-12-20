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
        exit(1); //異常終�?
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
          printf("ona\n");
          break;
	   }
	   else if (strcmp(run->name, buf) > 0) {
		   if (strcmp(root->next->name,buf) > 0) {
			   q = p;
			   p = create_word(buf);
			   root->next = p;
			   p->next = q->next;
               printf("sento\n");
			   break;
		   }
		   else {
			   //q = p;
			   p = create_word(buf);
			   q->next = p;
			   p->next = run->next;
               printf("aida\n");
			   break;
		   }
	   }
      run = run->next;
    }
    
    if(run != NULL){
      continue;
    }
    
	//if (run == NULL) {
		//q = p;
		p = create_word(buf);
		q->next = p;
        printf("matu\n");
		//break;
	//}
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
